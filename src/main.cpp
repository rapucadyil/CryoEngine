#include <SFML/Graphics.hpp>
#include "ecs/entity.h"
#include "systems/entity_system.h"
#include "systems/cryo_memory.h"
#include "general/application.h"
int main() {

    Application *app = new Application(1600, 900, "cryoengine-v7"); 
    app->tick(2.f);
    free(app);
    return 0;
}

