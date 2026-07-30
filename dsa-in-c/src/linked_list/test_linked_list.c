#include "linked_list.h"
#include "../../include/utils.h"

int main(void) {
    printf(YELLOW "=== Linked List Demo ===\n" RESET);
    LinkedList *ll = ll_create();

    ll_insert_end(ll, 10);
    ll_insert_end(ll, 20);
    ll_insert_end(ll, 30);
    ll_insert_front(ll, 5);
    ll_print(ll);          /* 5 -> 10 -> 20 -> 30 -> NULL */

    ll_reverse(ll);
    ll_print(ll);          /* 30 -> 20 -> 10 -> 5 -> NULL */

    ll_delete(ll, 20);
    ll_print(ll);          /* 30 -> 10 -> 5 -> NULL */

    ll_destroy(ll);
    printf(GREEN "All linked-list tests passed!\n" RESET);
    return 0;
}

// gcc test_linked_list.c linked_list.c -o test_linked_list  //linker to link
//.\test_linked_list.exe  //to run exe file