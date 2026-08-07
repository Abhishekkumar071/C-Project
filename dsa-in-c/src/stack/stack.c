#include "stack.h"
#include "../../include/utils.h"

Stack *stack_create(void) {
    Stack *s = safe_malloc(sizeof(Stack));
    s->top = -1;
    return s;
}

int stack_push(Stack *s, int val) {
    if (s->top == STACK_MAX - 1) { 
        fprintf(stderr, RED "Stack overflow\n" RESET); 
        return 0; 
    }
    s->data[++s->top] = val;
    return 1;
}

int stack_pop(Stack *s, int *out) {
    if (s->top == -1) { 
        fprintf(stderr, RED "Stack underflow\n" RESET); 
        return 0;
    }
    *out = s->data[s->top--];
    return 1;
}

int stack_peek(Stack *s, int *out) {
    if (s->top == -1) return 0;
    *out = s->data[s->top];
    return 1;
}

int stack_is_empty(Stack *s) { return s->top == -1; }

void stack_print(Stack *s) {
    printf("Stack (top->bottom): ");
    for (int i = s->top; i >= 0; i--) printf("%d ", s->data[i]);
    printf("\n");
}

void stack_destroy(Stack *s) { free(s); }
