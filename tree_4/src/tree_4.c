#include "tree_4.h"

int main(){
    Node* tree = NULL;
    Data x;
    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &x);
    while (x != 0) {
        tree = tree_add(tree, x);
        scanf("%d", &x);
    }

    tree_print(tree);
    tree = tree_destroy(tree);
    return 0;
}
