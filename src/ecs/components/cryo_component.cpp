#include "cryo_component.h"
#include "../cryo_entity.h"

cryoCOMPONENT::cryoCOMPONENT(const char *n, uint32 uuid, cryoOBJ& parent)
    :parent(parent) {
    this->component_name = n;
    this->uuid = uuid;
}

void cryoCOMPONENT::tick(float dt) {
    
}