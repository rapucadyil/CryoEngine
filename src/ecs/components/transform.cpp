#include "transform.h"

Transform::Transform(float x, float y, Entity& parent)
    :Component ("Transform", 0, parent) {

    this->position = sf::Vector2f(x,y);
}

Transform::~Transform() {
    delete this;
}

void Transform::tick(float dt) {
    //TODO -> blank for now
}

void Transform::move(sf::Vector2f spd) {
    this->position += spd;
}