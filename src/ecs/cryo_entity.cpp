#include "cryo_entity.h"
#include <stdio.h>

void tick(float dt, cryoENTITY* ent) {
  printf("ticking from entity %s\n", ent->name);
}

void render(float dt, cryoENTITY* ent) {
  printf("rendering entity %s\n", ent->name);
}
