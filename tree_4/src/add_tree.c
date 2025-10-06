#include "tree_4.h"

struct Node* tree_add(struct Node* tree, Data x) {
    if (tree == NULL) {
        struct Node* p = malloc(sizeof(struct Node));
        if (p == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        p->val = x;
        p->left = NULL;
        p->right = NULL;
        return p;
    }
    if (x > tree->val) {
        tree->right = tree_add(tree->right, x);
    }
    if (x < tree->val) {
        tree->left = tree_add(tree->left, x);
    }
    return tree;
}
