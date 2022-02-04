#ifndef CRYO_COMPONENT_H
#define CRYO_COMPONENT_H

#include "../../engine_defs.h"

class cryoCOMPONENT {
protected:
    str component_name;
    uint32 uuid;

public:

    cryoCOMPONENT(str name, uint32 uuid);
    virtual ~cryoCOMPONENT() = 0;

    void tick(float dt);
};
















#endif