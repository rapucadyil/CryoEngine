#include "component.h"
#include "../entity.h"

Component::Component(const char *n, uint32_t uuid, Entity& parent)
    :parent(parent) {
    this->component_name = n;
    this->uuid = uuid;
}

void Component::tick(float dt) {
    
}