#include <SFML/Graphics.hpp>
#include "general/utils.h"
#include "ecs/cryo_entity.h"
#include "systems/entity_system.h"
#include "systems/cryo_memory.h"

int main(int argc, char* argv[]) {
    
    cryoAPPINFO *info = (cryoAPPINFO*)cryo_allocate(sizeof(cryoAPPINFO), MEM_OBJ);
    info->screen_width = 1600;
    info->screen_height = 900;
    info->app_title = "v2";
    
    printf("%s\n", get_memory_usage());

    cryoSYS_E* sys = new cryoSYS_E();
    sf::RenderWindow window(sf::VideoMode(info->screen_width, info->screen_height), info->app_title);
    sf::CircleShape shape(100.0f);
    shape.setFillColor(sf::Color::Red);
    sys->create_entity(0, "Player",{(char*)"player"}, 10.F, 10.F);
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

