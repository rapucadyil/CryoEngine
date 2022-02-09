#include "cryo_application.h"

cryoAPPLICATION::cryoAPPLICATION(uint32_t screen_width, 
    uint32_t screen_height, const char *title) 
{
        this->appinfo = init_program(screen_width, screen_height, title);
        this->window = new sf::RenderWindow(sf::VideoMode(appinfo->screen_width,
            appinfo->screen_height), appinfo->app_title);
        this->is_running = true;
}

cryoAPPLICATION::~cryoAPPLICATION(){

}
