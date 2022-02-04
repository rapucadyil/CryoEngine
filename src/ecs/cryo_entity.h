#include <stdlib.h>
#include <stdint.h>
#include "../engine_defs.h"
#include <vector>
class cryoOBJ {
protected:
    str name;
    uint32 uuid;
public:
    std::vector<char*> tags;
    std::vector<class cryoCOMPONENT*> components;
    
public:
    cryoOBJ(str n, uint32 id, std::vector<char*> t);
    ~cryoOBJ();
    
    void tick(float dt);
    void render(float dt);

    void add_component(cryoCOMPONENT* cmp);

    template <typename T>
    T* get_component() {
        for (cryoCOMPONENT *cmp : components) {
            if(dynamic_cast<T*>(cmp)) {
                return (T*)cmp;
            }
        }
        return nullptr;
    }
    
};