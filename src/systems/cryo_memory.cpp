#include "cryo_memory.h"    
#include <string.h>
#include <stdio.h>
struct mem_info_t {
    size_t total_allocated_memory;
    size_t allocated_mem_per_tag[MEM_MAX_TAGS];
};


static struct mem_info_t meminfo;

static const char *mem_tag_string[MEM_MAX_TAGS] = {
    "UNKNOWN",
    "CONFIGURATIONS",
    "OBJECT/ENTITY",
    "SYSTEMS",
    "SPRITE"
};

void init_memory_subsystem() {
    memset(&meminfo, 0, sizeof(meminfo));
}  

void *cryo_allocate(uint64_t size, cryoMEMTAG tag) {
    // keeping track of total and tagged memory
    meminfo.total_allocated_memory += size;
    meminfo.allocated_mem_per_tag[tag] += size;

    void *block = malloc(size);
    memset(block, 0, size);     // zero out mem-block   
    return block;
}

void cryo_free(void *block, uint64_t size, cryoMEMTAG tag) {
    meminfo.total_allocated_memory -= size;
    meminfo.allocated_mem_per_tag[tag] -= size;
    free(block);
}

char *get_memory_usage() {
    const uint64_t gib = 1024 *1024 *1024;
    const uint64_t mib = 1024 *1024;
    const uint64_t kib = 1024;

    char buffer[8000] = "System memory use (tagged):\n";
    uint64_t offset = strlen(buffer);
    for(size_t i = 0; i < MEM_MAX_TAGS; ++i) {
        char unit[4] = "XiB";
        float tot = 1.0f;
        if(meminfo.allocated_mem_per_tag[i] >= gib) {
            unit[0] = 'G';
            tot = meminfo.allocated_mem_per_tag[i]/(float)gib;
        }else if(meminfo.allocated_mem_per_tag[i] >= mib) {
            unit[0] = 'M';
            tot = meminfo.allocated_mem_per_tag[i]/(float)mib;
        }else if(meminfo.allocated_mem_per_tag[i] >= kib) {
            unit[0] = 'K';
            tot = meminfo.allocated_mem_per_tag[i]/(float)kib;
        }else{
            unit[0] = 'B';
            unit[1] = 0;
            tot = (float)meminfo.allocated_mem_per_tag[i];
        }
        int32_t l = snprintf(buffer + offset, 8000,"%s: %.2f%s\n", mem_tag_string[i], tot, unit);
        offset += l;
    }
    char *output = strdup(buffer);
    return output;
}