#include "utils.h"

cryoAPPINFO* init_program(uint32 sw, uint32 sh, const char *title) {
  cryoAPPINFO* info = CRYO_MALLOC(cryoAPPINFO, cryoAPPINFO* ,1);
  info->screen_width = sw;
  info->screen_height = sh;
  info->app_title = title;
  return info;
}
