#include "queue.h"
#include "../../include/utils.h"

Queue *queue_create(void) {
    Queue *q = safe_malloc(sizeof(Queue));
    q->front = q->rear = q->size = 0;
    return q;
}

int enqueue(Queue *q, int val) {
    if (q->size == QUEUE_MAX) { 
        fprintf(stderr, RED "Queue full\n" RESET); 
        return 0; 
    }
    q->data[q->rear] = val;
    q->rear = (q->rear + 1) % QUEUE_MAX;
    q->size++;
    return 1;
}

int dequeue(Queue *q, int *out) {
    if (q->size == 0) { 
        fprintf(stderr, RED "Queue empty\n" RESET); 
        return 0; 
    }
    *out = q->data[q->front];
    q->front = (q->front + 1) % QUEUE_MAX;
    q->size--;
    return 1;
}

int queue_is_empty(Queue *q) { 
    return q->size == 0; 
}

void queue_print(Queue *q) {
    printf("Queue [front->rear]: ");
    for (int i = 0; i < q->size; i++)
        printf("%d ", q->data[(q->front + i) % QUEUE_MAX]);
    printf("\n");
}

void queue_destroy(Queue *q) { 
    free(q); 
}
