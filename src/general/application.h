#ifndef CRYO_APP_H
#define CRYO_APP_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Application {
protected:
    RenderWindow *window;
    bool is_running;
    uint32_t screen_width, screen_height;
    const char *app_title;
public:
    RenderWindow *get_render_window() {return this->window;}
    bool running() {return this->is_running;}
public:
    Application(uint32_t screen_width, uint32_t screen_height, const char *title);
    ~Application();

    void tick(float dt);
    void render(float dt);

};







#endif