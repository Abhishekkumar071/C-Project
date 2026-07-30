#include "linked_list.h"
#include "../../include/utils.h"

LinkedList *ll_create(void){
    LinkedList *ll = safe_malloc(sizeof(LinkedList));
    ll->head=NULL;
    ll->size=0;
    return ll;
}

void ll_insert_front(LinkedList *ll, int data){
    Node *node = safe_malloc(sizeof(Node));
    node->data = data;
    node->next = ll->head;
    ll->head = node;
    ll->size++;
}

void ll_insert_end(LinkedList *ll, int data) {
    Node *node = safe_malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (!ll->head) {
        ll->head = node; ll->size++; 
        return; 
    }
    Node *cur = ll->head;
    while (cur->next) cur = cur->next;
    cur->next = node;
    ll->size++;
}

int ll_delete(LinkedList *ll, int data) {
    Node *cur = ll->head, *prev = NULL;
    while (cur) {
        if (cur->data == data) {
            if (prev) prev->next = cur->next;
            else       ll->head  = cur->next;
            free(cur);
            ll->size--;
            return 1;
        }
        prev = cur; cur = cur->next;
    }
    return 0; /* not found */
}

void ll_print(LinkedList *ll) {
    Node *cur = ll->head;
    printf("List [size=%d]: ", ll->size);
    while (cur) { 
        printf("%d -> ", cur->data); 
        cur = cur->next; 
    }
    printf("NULL\n");
}

void ll_reverse(LinkedList *ll) {
    Node *prev = NULL, *cur = ll->head, *next = NULL;
    while (cur) { 
        next = cur->next; 
        cur->next = prev; 
        prev = cur; 
        cur = next; 
    }
    ll->head = prev;
}

void ll_destroy(LinkedList *ll) {
    Node *cur = ll->head;
    while (cur) { 
        Node *tmp = cur->next; 
        free(cur); 
        cur = tmp; 
    }
    free(ll);
}