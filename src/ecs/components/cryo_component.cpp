#include "cryo_component.h"

cryoCOMPONENT::cryoCOMPONENT(const char *n, uint32 uuid) {
    this->component_name = n;
    this->uuid = uuid;
}

void cryoCOMPONENT::tick(float dt) {
    
}