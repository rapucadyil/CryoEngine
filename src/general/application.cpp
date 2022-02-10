#include "application.h"

Application::Application(uint32_t screen_width, 
    uint32_t screen_height, const char *title) 
{

    this->screen_width = screen_width;
    this->screen_height = screen_height;
    this->app_title = title;
    this->window = new sf::RenderWindow(sf::VideoMode(this->screen_width,
        this->screen_height), this->app_title);
    this->is_running = true;
}

Application::~Application(){
    delete this;
}

void Application::tick(float dt) {
    while(this->window->isOpen()) {
        Event evt;
        while(this->window->pollEvent(evt)) {
            if (evt.type == sf::Event::Closed) {
                this->window->close();
            }
            if(evt.type == sf::Event::KeyPressed) {
                if(evt.key.code == Keyboard::Escape) {
                    this->window->close();
                }
            }
        }
        this->render(2.f);
    }
}

void Application::render(float dt) {
    this->window->clear();
    this->window->display();
}