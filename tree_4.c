#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef int Data;
typedef struct Node Node;

struct Node {
    Data val;            // данные в узле
    struct Node* left;  // левый ребенок
    struct Node* right; // правый ребенок
};

struct Node* tree_add(struct Node* tree, Data x) {
    if (tree == NULL) {
        struct Node* p = malloc(sizeof(struct Node));
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

void tree_destroy(struct Node* tree) {
    if (tree == NULL)
        return NULL;
    tree_destroy(tree->left);
    tree_destroy(tree->right);
    free(tree);
    return NULL;
}

int main(){
    Node* tree = NULL;
    Data x;
    scanf("%d", &x);
    while (x != 0) {
        tree = tree_add(tree, x);
        scanf("%d", &x);
    }

    tree_print(tree);
    tree_destroy(tree);
    return 0;
}
