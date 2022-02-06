#ifndef CRYO_MEM_H
#define CRYO_MEM_H
#include <stdlib.h>
#include <stdint.h>

typedef enum mem_type {
    MEM_UNKNOWN,
    MEM_CONFIG,
    MEM_OBJ,
    MEM_SYS,
    MEM_SPRITE,

    MEM_MAX_TAGS
}cryoMEMTAG;


void init_memory_subsystem();

void shutdown_memory_subsystem();

void *cryo_allocate(uint64_t size, cryoMEMTAG tag);

void cryo_free(void *block, uint64_t size, cryoMEMTAG tag);


char *get_memory_usage();
#endif