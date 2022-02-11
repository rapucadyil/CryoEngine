#ifndef SPR_H
#define SPR_H
#include <SFML/Graphics.hpp>
#include "component.h"

class Sprite : Component {
private:
    sf::Texture texture;

public:
    Sprite();
    ~Sprite();

    void tick(float dt);
    void render(float dt);

    sf::Texture get_texture() {return this->texture;}
};

#endif