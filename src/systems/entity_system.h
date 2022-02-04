#include <vector>
#include "../engine_defs.h"
class cryoSYS_E {

private:
  std::vector<class cryoOBJ*> entities;

public:
  cryoSYS_E();
  ~cryoSYS_E();

  void create_entity(uint32 uuid, str name, std::vector<char*> t);
  void remove_entity();

  void tick(float dt);

  cryoOBJ* get_entity_by_tag(str tag);
};

