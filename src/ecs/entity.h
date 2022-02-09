#include <stdlib.h>
#include <stdint.h>
#include <vector>
class Entity {
protected:
    const char *name;
    uint32_t uuid;
public:
    std::vector<char*> tags;
    std::vector<class Component*> components;

public:
    Entity(const char *n, uint32_t id, std::vector<char*> t, float x, float y);
    ~Entity();
    
    void tick(float dt);
    
    void add_component(Component* cmp);

    template <typename T>
    T* get_component() {
        for (Component *cmp : components){
            if(dynamic_cast<T*>(cmp)) {
                return (T*)cmp;
            }
        }
        return nullptr;
    }
    
    const char *get_name() {return this->name;}
    uint32_t get_uuid() {return this->uuid;}


};