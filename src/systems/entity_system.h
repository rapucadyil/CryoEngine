#include <vector>
#include "../engine_defs.h"
class cryoSYS_E {

private:
  std::vector<class cryoOBJ*> entities;

public:
  cryoSYS_E();
  ~cryoSYS_E();

  void create_entity(uint32 uuid, const char *name, std::vector<char*> t);
  void remove_entity();

  void tick(float dt);

  cryoOBJ* get_entity_by_tag(char *tag);

  template <typename T>
  T* get_entity_by_type() {
    for (cryoOBJ* obj : this->entities) {
      if(dynamic_cast<T*>(obj)) {
        return (T*)obj;
      }
    }
    return nullptr;
  }


};

