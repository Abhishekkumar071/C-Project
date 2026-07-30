#ifndef LINKED_LIST_H
#define LINKED_LIST_H


typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct{
    Node *head;
    int size;
}LinkedList;

LinkedList *ll_create(void);
void        ll_insert_front(LinkedList *ll, int data);
void        ll_insert_end(LinkedList *ll, int data);
int         ll_delete(LinkedList *ll, int data);
void        ll_print(LinkedList *ll);
void        ll_reverse(LinkedList *ll);
void        ll_destroy(LinkedList *ll);

#endif