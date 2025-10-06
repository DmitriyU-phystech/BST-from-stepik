#ifndef TREE_H
#define TREE_H

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

Node* tree_add(Node* tree, Data x);
void tree_print(Node* tree);
Node* tree_destroy(Node* tree);

#endif
