#include "tree_4.h"

Node* tree_destroy(struct Node* tree) {
    if (tree == NULL)
        return NULL;
    tree_destroy(tree->left);
    tree_destroy(tree->right);
    free(tree);
    return NULL;
}
