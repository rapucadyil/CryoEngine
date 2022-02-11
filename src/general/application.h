#ifndef CRYO_APP_H
#define CRYO_APP_H
#include <SFML/Graphics.hpp>
#include "../systems/entity_system.h"
using namespace sf;

class Application {
protected:
    RenderWindow *window;
    bool is_running;
    uint32_t screen_width, screen_height;
    const char *app_title;
    EntitySystem *entity_system;
public:
    RenderWindow *get_render_window() {return this->window;}
    bool running() {return this->is_running;}
    EntitySystem *get_entity_system() { return entity_system;}
public:
    Application(uint32_t screen_width, uint32_t screen_height, const char *title);
    ~Application();

    void tick(float dt);
    void render(float dt);
};
#endif