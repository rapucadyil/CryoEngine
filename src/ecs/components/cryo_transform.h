#ifndef CRYO_TRANSFORM_H
#define CRYO_TRANSFORM_H
#include "cryo_component.h"
#include <SFML/Graphics.hpp>
class cryoTRANSFORM : public cryoCOMPONENT {
private:
    sf::Vector2f position;

public:
    cryoTRANSFORM(float x, float y);
    ~cryoTRANSFORM();

    void tick(float dt);

    void move(sf::Vector2f speed);
};
#endif