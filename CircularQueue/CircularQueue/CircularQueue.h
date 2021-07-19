#pragma once
class CircularQueue
{


};

#include "QueueConfig.h"

struct circular_queue_s;
typedef struct circular_queue_s circular_queue_t;

struct circular_queue_s {
	uint8_t _elements_count;
	uint8_t _head;
	uint8_t _tail;
	uint8_t _elements[QUEUE_SIZE];
};

void	init(circular_queue_t *q);
uint8_t get_size(circular_queue_t *q);
void    enqueue(circular_queue_t *q,uint8_t new_element);
uint8_t dequeue(circular_queue_t *q);
bool	is_full(circular_queue_t *q);
bool	is_empty(circular_queue_t *q);
uint8_t next(uint8_t current_index, circular_queue_t *q);
void    dump(circular_queue_t* q);

