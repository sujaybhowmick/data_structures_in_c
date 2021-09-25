//
// Created by Sujay Bhowmick on 9/23/21.
//

#include "../common/utils.h"

#ifndef DATA_STRUCTURES_IN_C_TREE_H
#define DATA_STRUCTURES_IN_C_TREE_H
typedef struct tree_node {
    void *data;
    struct tree_node *left;
    struct tree_node *right;

} TreeNode;

void insertNode(TreeNode **, COMPARE, void *);
TreeNode* insertNodeRecur(TreeNode *, COMPARE, void *);
#endif //DATA_STRUCTURES_IN_C_TREE_H
