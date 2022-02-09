#ifndef CRYO_COMPONENT_H
#define CRYO_COMPONENT_H
#include <stdint.h>
class Component {
protected:
    const char *component_name;
    uint32_t uuid;
    class Entity& parent;

public:

    Component(const char *name, uint32_t uuid, class Entity& parent);
    ~Component() {}

    void tick(float dt);
};
















#endif