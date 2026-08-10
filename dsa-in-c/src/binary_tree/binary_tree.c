#include "binary_tree.h"
#include "../../include/utils.h"

BSTNode *bst_insert(BSTNode *root, int data) {
    if (!root) {
        BSTNode *n = safe_malloc(sizeof(BSTNode));
        n->data = data; n->left = n->right = NULL;
        return n;
    }
    if (data < root->data) root->left  = bst_insert(root->left,  data);
    else if (data > root->data) root->right = bst_insert(root->right, data);
    return root;
}

static BSTNode *min_node(BSTNode *n) {
    while (n->left) n = n->left;
    return n;
}

BSTNode *bst_delete(BSTNode *root, int data) {
    if (!root) return NULL;
    if (data < root->data) { root->left  = bst_delete(root->left,  data); return root; }
    if (data > root->data) { root->right = bst_delete(root->right, data); return root; }
    /* node found */
    if (!root->left)  { BSTNode *r = root->right; free(root); return r; }
    if (!root->right) { BSTNode *l = root->left;  free(root); return l; }
    BSTNode *succ = min_node(root->right);
    root->data  = succ->data;
    root->right = bst_delete(root->right, succ->data);
    return root;
}

int bst_search(BSTNode *root, int data) {
    if (!root) return 0;
    if (data == root->data) return 1;
    return data < root->data ? bst_search(root->left, data) : bst_search(root->right, data);
}

void bst_inorder(BSTNode *root)   { if (root) { bst_inorder(root->left);  printf("%d ", root->data); bst_inorder(root->right); } }
void bst_preorder(BSTNode *root)  { if (root) { printf("%d ", root->data); bst_preorder(root->left);  bst_preorder(root->right); } }
void bst_postorder(BSTNode *root) { if (root) { bst_postorder(root->left); bst_postorder(root->right); printf("%d ", root->data); } }

int bst_height(BSTNode *root) {
    if (!root) return 0;
    int l = bst_height(root->left), r = bst_height(root->right);
    return 1 + (l > r ? l : r);
}

void bst_destroy(BSTNode *root) {
    if (root) { bst_destroy(root->left); bst_destroy(root->right); free(root); }
}
