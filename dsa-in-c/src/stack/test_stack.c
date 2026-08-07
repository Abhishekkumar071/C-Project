#include "stack.h"
#include "../../include/utils.h"

int main(void) {
    printf(YELLOW "=== Stack Demo ===\n" RESET);
    Stack *s = stack_create();

    stack_push(s, 10); stack_push(s, 20); stack_push(s, 30);
    stack_print(s);

    int val;
    stack_pop(s, &val);
    printf("Popped: %d\n", val);
    stack_print(s);

    stack_destroy(s);
    printf(GREEN "Stack tests passed!\n" RESET);
    return 0;
}

// gcc test_stack.c stack.c -o test_stack  //linker to link
//.\test_stack.exe  //to run exe file
