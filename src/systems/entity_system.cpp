#include "entity_system.h"
#include "../ecs/cryo_entity.h"
#include <stdio.h>

cryoSYS_E::cryoSYS_E() {
    this->entities = std::vector<cryoOBJ*>();
}

cryoSYS_E::~cryoSYS_E() {
    delete this;
}

void cryoSYS_E::create_entity(uint32 uuid, const char *name,std::vector<char*> t, float x, float y) {
    cryoOBJ *obj = new cryoOBJ(name, uuid, t, x, y);
    this->entities.push_back(obj);
}

void cryoSYS_E::remove_entity() {
    
}

void cryoSYS_E::tick(float dt) {
    if (this->entities.size() > 0) {
        for(cryoOBJ* obj : this->entities) {
            obj->tick(dt);
        }
    }else{
        fprintf(stderr, "Error in Entity System @method:tick(float dt) - entities is empty\n");
        exit(-1);
    }
}

cryoOBJ* cryoSYS_E::get_entity_by_tag(char *tag) {
    for (size_t i = 0; i < this->entities.size(); i++) {
        for (size_t j = 0; j < this->entities[i]->tags.size(); j++) {
            if (this->entities[i]->tags[j] == tag) {
                return this->entities[i];
            }
        }
    }
    return nullptr;
}
