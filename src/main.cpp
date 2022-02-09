#include <SFML/Graphics.hpp>
#include "ecs/entity.h"
#include "systems/entity_system.h"
#include "systems/cryo_memory.h"

int main(int argc, char* argv[]) {
    
    sf::RenderWindow window(sf::VideoMode(1600, 900), "cryoengine-v6");
    sf::CircleShape shape(100.0f);
    shape.setFillColor(sf::Color::Red);
    // game loop
    while(window.isOpen()) {
        sf::Event evt; 
        while(window.pollEvent(evt)) {
            if(evt.type == sf::Event::Closed) {
                window.close();
            }
        }
        //sys->tick(2.F);
        window.clear();
        window.draw(shape);
        window.display();
    }
    
    
    return 0;
}

