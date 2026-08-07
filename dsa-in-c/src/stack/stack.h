#ifndef STACK_H
#define STACK_H

#define STACK_MAX 1000

typedef struct {
    int data[STACK_MAX];
    int top;
} Stack;

Stack *stack_create(void);
int    stack_push(Stack *s, int val);
int    stack_pop(Stack *s, int *out);
int    stack_peek(Stack *s, int *out);
int    stack_is_empty(Stack *s);
void   stack_print(Stack *s);
void   stack_destroy(Stack *s);

#endif
