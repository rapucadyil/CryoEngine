#ifndef CRYO_TRANSFORM_H
#define CRYO_TRANSFORM_H
#include "component.h"
#include <SFML/Graphics.hpp>
class Transform : public Component {
private:
    sf::Vector2f position;

public:
    Transform(float x, float y, Entity& parent);
    ~Transform();

    void tick(float dt);

    void move(sf::Vector2f speed);
};
#endif