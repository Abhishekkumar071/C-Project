#include "binary_tree.h"
#include "../../include/utils.h"

int main(void) {
    printf(YELLOW "=== Binary Search Tree Demo ===\n" RESET);
    BSTNode *root = NULL;
    int vals[] = {50, 30, 70, 20, 40, 60, 80};
    for (int i = 0; i < 7; i++) root = bst_insert(root, vals[i]);

    printf("Inorder   : "); bst_inorder(root);   printf("\n");
    printf("Preorder  : "); bst_preorder(root);  printf("\n");
    printf("Postorder : "); bst_postorder(root); printf("\n");
    printf("Height    : %d\n", bst_height(root));
    printf("Search 40 : %s\n", bst_search(root, 40) ? "Found" : "Not found");

    root = bst_delete(root, 30);
    printf("After deleting 30 -> Inorder: "); bst_inorder(root); printf("\n");

    bst_destroy(root);
    printf(GREEN "BST tests passed!\n" RESET);
    return 0;
}
