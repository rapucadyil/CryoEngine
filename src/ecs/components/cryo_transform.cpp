#include "cryo_transform.h"

cryoTRANSFORM::cryoTRANSFORM(float x, float y, cryoOBJ& parent)
    :cryoCOMPONENT("Transform", 0, parent) {

    this->position = sf::Vector2f(x,y);
}

cryoTRANSFORM::~cryoTRANSFORM() {
    delete this;
}

void cryoTRANSFORM::tick(float dt) {
    //TODO -> blank for now
}

void cryoTRANSFORM::move(sf::Vector2f spd) {
    this->position += spd;
}