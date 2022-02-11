#ifndef ENTT_SYS_H
#define ENTT_SYS_H
#include <stdint.h>
#include <vector>
class EntitySystem{

private:
  std::vector<class Entity*> entities;

public:
  EntitySystem();
  ~EntitySystem();

  void create_entity(uint32_t uuid, const char *name, std::vector<char*> t, float x, float y);
  void remove_entity();

  void tick (float dt);

  Entity* get_entity_by_tag(char *tag);

  template <typename T>
  T* get_entity_by_type() {
    for (Entity* obj : this->entities) {
      if(dynamic_cast<T*>(obj)) {
        return (T*)obj;
      }
    }
    return nullptr;
  }


};
#endif
