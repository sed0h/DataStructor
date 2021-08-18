#include <stdint.h>

#define QUEUE_SIZE         (349)

#if     (QUEUE_SIZE < (1<<8))
#define QUEUE_CURSOR_TYPE uint8_t
#elif   (QUEUE_SIZE < (1<<16))
#define QUEUE_CURSOR_TYPE uint16_t
#endif

#define QUEUE_ELEMENT_TYPE uint8_t
