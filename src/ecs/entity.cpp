#include "entity.h"
#include "components/component.h"
#include "components/transform.h"
#include <stdio.h>

Entity::Entity(const char * n, uint32_t id, std::vector<char*> t, float x, float y) {
  this->name = n;
  this->uuid = id;
  this->tags = t;
  this->components = std::vector<Component*>();
  this->add_component(new Transform(x, y, *this));
}

Entity::~Entity() {
  delete this;
}

void Entity::tick(float dt) {
  printf("ticking from entity %s\n", this->name);
}

void Entity::add_component(Component *cmp) {
  this->components.push_back(cmp);
}