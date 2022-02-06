#ifndef CRYO_PHYSBODY_H
#define CRYO_PHYSBODY_H

#include "cryo_component.h"
#include <SFML/Graphics.hpp>

class cryoPHYSBODY : public cryoCOMPONENT {
private:
    sf::Vector2f position;
    sf::FloatRect bounding_box;
    bool collision_flag;
    bool trigger_flag;
    bool colliding;
public:
    //NOTE -> this is the onCollisionEnter and Exit function pointer
    void (*on_collision_enter)(void);
    void (*on_collision_exit)(void);
    //NOTE -> this is the onTriggerEnter and Exit function pointer
    void (*on_trigger_enter)(void);
    void (*on_trigger_exit)(void);

public:
    sf::FloatRect get_bounding_box() {return this->bounding_box;}
    bool get_collision_flag() {return this->collision_flag;}
    bool get_trigger_flag() {return this->trigger_flag;}
    bool is_colliding() {return this->colliding;}
    sf::Vector2f get_position() {return this->position;}

    void set_collision_flag(bool val) {this->collision_flag = val;}
    void set_trigger_flag(bool val) {this->trigger_flag = val;}
    void set_colliding(bool val) {this->colliding = val;}
    void set_position(sf::Vector2f val) {this->position = val;}

public:
    cryoPHYSBODY(float rectL, float rectR, float rectW, float rectH, bool coll_flag, bool trig_flag, sf::Vector2f pos, cryoOBJ& parent);
    ~cryoPHYSBODY();

    void tick(float dt);
};




#endif /* CRYO_PHYSBODY_H */