#include "entity_system.h"
#include "../ecs/cryo_entity.h"

int init_system(cryoENTTSYS* sys) {
  int res_code = 0;
  sys = CRYO_MALLOC(cryoENTTSYS, cryoENTTSYS*, 1);
  sys->entities = std::vector<cryoENTITY*>();
  if(sys != NULL) {
    return 0;
  }
  return -1;
}


//TODO -> remove the cryoENTTY* return type if needed later.
cryoENTITY* create_entity(cryoENTTSYS* sys, uint32 uuid, str name) {
  cryoENTITY* e = CRYO_MALLOC(cryoENTITY, cryoENTITY*, 1);
  e->uuid = uuid;
  e->name = name;
  if(e != NULL) {
    sys->entities.push_back(e);
    fprintf(stdout, "Successfully created entity %s\n"e->name);

  }else{
    fprintf(stderr, "Could not create entity exiting...\n");
    exit(-1);
  }
}
