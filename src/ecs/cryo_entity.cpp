#include "cryo_entity.h"
#include "components/cryo_component.h"
#include "components/cryo_transform.h"
#include <stdio.h>

cryoOBJ::cryoOBJ(const char * n, uint32 id, std::vector<char*> t, float x, float y) {
  this->name = n;
  this->uuid = id;
  this->tags = t;
  this->components = std::vector<cryoCOMPONENT*>();
  this->add_component(new cryoTRANSFORM(x, y, *this));
}

cryoOBJ::~cryoOBJ() {
  delete this;
}

void cryoOBJ::tick(float dt) {
  printf("ticking from entity %s\n", this->name);
}

void cryoOBJ::add_component(cryoCOMPONENT *cmp) {
  this->components.push_back(cmp);
}