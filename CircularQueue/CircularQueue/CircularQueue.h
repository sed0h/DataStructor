
#include "QueueConfig.h"

#ifdef __cplusplus
extern "C" {
#endif // !_cplusplus

struct circular_queue_s {
    QUEUE_CURSOR_TYPE  _elements_count;
    QUEUE_CURSOR_TYPE  _head;
    QUEUE_CURSOR_TYPE  _tail;
    QUEUE_ELEMENT_TYPE _elements[QUEUE_SIZE];
};
typedef struct circular_queue_s circular_queue_t;

void               init(circular_queue_t *q);
QUEUE_CURSOR_TYPE  get_size(circular_queue_t *q);
void               enqueue(circular_queue_t *q, QUEUE_ELEMENT_TYPE new_element);
QUEUE_ELEMENT_TYPE dequeue(circular_queue_t *q);
bool               is_full(circular_queue_t *q);
bool               is_empty(circular_queue_t *q);
QUEUE_CURSOR_TYPE  next(QUEUE_CURSOR_TYPE current_index, circular_queue_t *q);
void               dump(circular_queue_t *q);

#ifdef __cplusplus
}
#endif // !_cplusplus
