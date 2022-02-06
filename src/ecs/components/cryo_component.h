#ifndef CRYO_COMPONENT_H
#define CRYO_COMPONENT_H

#include "../../general/engine_defs.h"

class cryoCOMPONENT {
protected:
    const char *component_name;
    uint32 uuid;
    class cryoOBJ& parent;

public:

    cryoCOMPONENT(const char *name, uint32 uuid, class cryoOBJ& parent);
    ~cryoCOMPONENT() {}

    void tick(float dt);
};
















#endif