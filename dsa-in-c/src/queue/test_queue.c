#include "queue.h"
#include "../../include/utils.h"

int main(void) {
    printf(YELLOW "=== Queue Demo ===\n" RESET);
    Queue *q = queue_create();
    enqueue(q, 1); enqueue(q, 2); enqueue(q, 3);
    queue_print(q);

    int val;
    dequeue(q, &val);
    printf("Dequeued: %d\n", val);
    queue_print(q);

    queue_destroy(q);
    printf(GREEN "Queue tests passed!\n" RESET);
    return 0;
}
