#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_MAX 1000

typedef struct {
    int data[QUEUE_MAX];
    int front, rear, size;
} Queue;

Queue *queue_create(void);
int    enqueue(Queue *q, int val);
int    dequeue(Queue *q, int *out);
int    queue_is_empty(Queue *q);
void   queue_print(Queue *q);
void   queue_destroy(Queue *q);

#endif
