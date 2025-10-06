#include "tree_4.h"

void tree_print(struct Node* tree) {
    if (tree == NULL) {
        return;
    }
    if (tree->left == NULL && tree->right == NULL) {
        printf("%d ", tree->val);
        return;
    }
    tree_print(tree->left);
    tree_print(tree->right);
}
