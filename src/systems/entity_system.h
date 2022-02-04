#include <vector>

typedef struct ent_sys_t {
  std::vector<struct entity_t*> entities;
}cryoENTTSYS;

int init_system(cryoENTTSYS* sys);

//TODO -> remove the cryoENTITY* return type if not needed later
struct entity_t* create_entity(cryoENTTSYS* sys, uint32 uuid, str name);

