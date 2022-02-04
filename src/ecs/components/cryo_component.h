#ifndef CRYO_COMPONENT_H
#define CRYO_COMPONENT_H

#include "../../engine_defs.h"

class cryoCOMPONENT {
protected:
    const char *component_name;
    uint32 uuid;

public:

    cryoCOMPONENT(const char *name, uint32 uuid);
    ~cryoCOMPONENT() {}

    void tick(float dt);
};
















#endif