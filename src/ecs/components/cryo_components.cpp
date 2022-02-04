#include "cryo_components.h"

cryoCOMPONENT::cryoCOMPONENT(str n, uint32 uuid) {
    this->component_name = n;
    this->uuid = uuid;
}

void cryoCOMPONENT::tick(float dt) {
    
}