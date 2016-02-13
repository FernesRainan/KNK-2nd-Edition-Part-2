// A queue is similar to a stack, except that items are added at one end but removed from
// the other in a FIFO fashion. Operations on a queue might include:

// Inserting an item at the end of the queue
// Removing an item from the beginning of the queue
// Returning the first item in the queue (without changing the queue)
// Returning the last item in the queue (without changing the queue)
// Testing whether the queue is empty

// Write an interface for a queue module in the form of a header file named queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int qItem;

typedef struct queue_type *Queue;

void q_insert(Queue q, qItem i);
qItem q_remove(Queue q);
qItem q_first(Queue q);
qItem q_last(Queue q);
bool q_is_empty(Queue q);

#endif

