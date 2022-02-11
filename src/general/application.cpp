#include "application.h"
Application::Application(uint32_t screen_width, 
    uint32_t screen_height, const char *title) 
{

    this->screen_width = screen_width;
    this->screen_height = screen_height;
    this->app_title = title;
    this->window = new sf::RenderWindow(sf::VideoMode(this->screen_width,
        this->screen_height), this->app_title);
    this->entity_system = new EntitySystem();
    this->entity_system->create_entity(0, "Player", {"Player", "MC"}, 10, 10);
    this->is_running = true;
}

Application::~Application(){
    free(this->window);
    this->window = NULL;
    delete this->window;
    free(this->entity_system);
    this->entity_system = NULL;
    delete this->entity_system;
    delete[] this->app_title;
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
        this->entity_system->tick(dt);
        this->render(dt);
    }
}

void Application::render(float dt) {
    this->window->clear();
    this->window->display();
}