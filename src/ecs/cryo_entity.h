#include <stdlib.h>
#include <stdint.h>
#include "../general/engine_defs.h"
#include <vector>
class cryoOBJ {
protected:
    const char *name;
    uint32 uuid;
public:
    std::vector<char*> tags;
    std::vector<class cryoCOMPONENT*> components;

public:
    cryoOBJ(const char *n, uint32 id, std::vector<char*> t, float x, float y);
    ~cryoOBJ();
    
    void tick(float dt);
    
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
    
    const char *get_name() {return this->name;}
    uint32 get_uuid() {return this->uuid;}


};