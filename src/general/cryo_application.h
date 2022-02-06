#ifndef CRYO_APP_H
#define CRYO_APP_H
#include <SFML/Graphics.hpp>
#include "utils.h"
using namespace sf;

class cryoAPPLICATION {
protected:
    RenderWindow *window;
    bool is_running;
    cryoAPPINFO *appinfo;
public:
    RenderWindow *get_render_window() {return this->window;}
    bool running() {return this->is_running;}
    cryoAPPINFO *get_application_info() {return this->appinfo;}

public:
    cryoAPPLICATION(uint32_t screen_width, uint32_t screen_height, const char *title);
    ~cryoAPPLICATION();

    void tick(float dt);
    void render(float dt);

};







#endif