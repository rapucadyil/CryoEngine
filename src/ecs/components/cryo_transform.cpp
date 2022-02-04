#include "cryo_transform.h"

cryoTRANSFORM::cryoTRANSFORM(float x, float y)
    :cryoCOMPONENT("Transform", 0) {

    this->position = sf::Vector2f(x,y);
}

cryoTRANSFORM::~cryoTRANSFORM() {
    delete this;
}

void cryoTRANSFORM::tick(float dt) {

}

void cryoTRANSFORM::move(sf::Vector2f spd) {
    this->position += spd;
}