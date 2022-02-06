#include <stdlib.h>
#include <stdint.h>

// macro definitions
#define CRYO_MALLOC(X,T,S)   (T)malloc(S*sizeof(X))
#define CRYO_DEALLOC(X)      free(X)


//type definitions for common std int types
#define uint32               uint32_t
#define uin16                uint16_t
#define int32                int32_t
#define real32               float
#define real64               double
#define byte                 unsigned char
//#define str                  char *
