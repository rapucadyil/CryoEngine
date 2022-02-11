#include "entity_system.h"
#include "../ecs/entity.h"
#include <stdio.h>

EntitySystem::EntitySystem(){
    this->entities = std::vector<Entity*>();
}

EntitySystem::~EntitySystem() {
    delete this;
}

void EntitySystem::create_entity(uint32_t uuid, const char *name,std::vector<char*> t, float x, float y) {
    Entity *obj = new Entity(name, uuid, t, x, y);
    this->entities.push_back(obj);
}

void EntitySystem::remove_entity() {
    
}

void EntitySystem::tick(float dt) {
    if (this->entities.size() > 0) {
        for(Entity* obj : this->entities) {
            obj->tick(dt);
        }
    }else{
        fprintf(stderr, "Error in Entity System @method:tick(float dt) - entities is empty\n");
    }
}

Entity* EntitySystem::get_entity_by_tag(char *tag) {
    for (size_t i = 0; i < this->entities.size(); i++) {
        for (size_t j = 0; j < this->entities[i]->tags.size(); j++) {
            if (this->entities[i]->tags[j] == tag) {
                return this->entities[i];
            }
        }
    }
    return nullptr;
}
