#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct BSTNode {
    int data;
    struct BSTNode *left, *right;
} BSTNode;

BSTNode *bst_insert(BSTNode *root, int data);
BSTNode *bst_delete(BSTNode *root, int data);
int      bst_search(BSTNode *root, int data);
void     bst_inorder(BSTNode *root);
void     bst_preorder(BSTNode *root);
void     bst_postorder(BSTNode *root);
int      bst_height(BSTNode *root);
void     bst_destroy(BSTNode *root);

#endif
