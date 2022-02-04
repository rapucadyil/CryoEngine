#include "cryo_entity.h"
#include "components/cryo_components.h"
#include <stdio.h>

cryoOBJ::cryoOBJ(str n, uint32 id, std::vector<char*> t) {
  this->name = n;
  this->uuid = id;
  this->tags = t;
  this->components = std::vector<cryoCOMPONENT*>();
}

cryoOBJ::~cryoOBJ() {
  delete this;
}

void cryoOBJ::tick(float dt) {
  printf("ticking from entity %s\n", this->name);
}

void cryoOBJ::render(float dt) {

}

void cryoOBJ::add_component(cryoCOMPONENT *cmp) {
  this->components.push_back(cmp);
}