#include <SFML/Graphics.hpp>
#include "utils.h"
#include "ecs/cryo_entity.h"
#include "systems/entity_system.h"

int main(int argc, char* argv[]) {
    
    cryoAPPINFO *info = init_program(1600, 900, "Cryoengine-App");
    
    cryoSYS_E* sys = new cryoSYS_E();
    sf::RenderWindow window(sf::VideoMode(info->screen_width, info->screen_height), info->app_title);
    sf::CircleShape shape(100.0f);
    shape.setFillColor(sf::Color::Red);
    sys->create_entity(0, "Player",{(char*)"player"});
    cryoOBJ *player = sys->get_entity_by_tag("player");
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

