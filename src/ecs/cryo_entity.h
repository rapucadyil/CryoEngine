#include <stdlib.h>
#include <stdint.h>
#include "../engine_defs.h"
#include <vector>
typedef struct entity_t {

  str name;
  uint32 uuid;
  std::vector<char*> tags;


}cryoENTITY;


void tick(float dt, cryoENTITY* ent);

void render(float dt, cryoENTITY* ent);
