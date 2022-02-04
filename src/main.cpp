#include <SFML/Graphics.hpp>
#include "utils.h"
#include "ecs/cryo_entity.h"
#include "systems/entity_system.h"

int main(int argc, char* argv[]) {

  cryoAPPINFO *info = init_program(1600, 900, "Cryoengine-App");

  cryoENTTSYS* sys;
  int sys_init_code = init_system(sys);
  if(sys_init_code != 0) {
    fprintf(stderr, "Could not initialize the entity system correctly exiting with code %i\n", sys_init_code);
    exit(sys_init_code);
  }else{
    fprintf(stdout, "Initialize the entity system correctly :)\n");
  }

  sf::RenderWindow window(sf::VideoMode(info->screen_width, info->screen_height), info->app_title);
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

    window.clear();
    window.draw(shape);
    window.display();
  }


  return 0;

}

