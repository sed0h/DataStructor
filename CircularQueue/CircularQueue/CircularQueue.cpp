#include <stdint.h>
#include "CircularQueue.h"

void enqueue(circular_queue_t *q, QUEUE_ELEMENT_TYPE new_element) {
	if (is_full(q)) {
		return;
	}
	
	QUEUE_CURSOR_TYPE current_tail = q->_tail;
	q->_elements[current_tail] = new_element;
	q->_tail = next(current_tail, q);
	q->_elements_count++;
}

void init(circular_queue_t *q) {
	q->_head = 0;
	q->_tail = 0;
	q->_elements_count = 0;
}

QUEUE_CURSOR_TYPE get_size(circular_queue_t* q) {
	return q->_elements_count;
}

//check whether q is empty before call this fun
QUEUE_ELEMENT_TYPE dequeue(circular_queue_t *q) {
	//if (is_empty(q)) {
	//	return
	//}

	QUEUE_CURSOR_TYPE current_head = q->_head;
	q->_head = next(current_head, q);
	q->_elements_count--;

	return (q->_elements[current_head]);
}

//queue index:0~QUEUE_SIZE-1
bool is_full(circular_queue_t* q) {
	QUEUE_CURSOR_TYPE current_tail = q->_tail;
	if (next(current_tail, q) == q->_head) {
		return true;
	}

	return false;
}
bool is_empty(circular_queue_t *q) {
	//uint8_t current_head = q->_head;
	//if (next(current_head, q) == q->_tail) {
	//	return true;
	//}
	//return false;

	return (q->_head == q->_tail);
}

QUEUE_CURSOR_TYPE next(QUEUE_CURSOR_TYPE current_index, circular_queue_t *q) {
	if ((QUEUE_SIZE - 1) == current_index) {
		return 0;
	}

	return (current_index + 1);
}