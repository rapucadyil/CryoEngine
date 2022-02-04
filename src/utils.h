#include "engine_defs.h"

struct cryoAPPINFO {

  uint32 screen_width;
  uint32 screen_height;
  str    app_title;
};
cryoAPPINFO* init_program(uint32 sw, uint32 sh, str title);
