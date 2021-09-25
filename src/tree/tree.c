//
// Created by Sujay Bhowmick on 9/23/21.
//

#include <stdlib.h>
#include "tree.h"

void insertNode(TreeNode **root, COMPARE compare, void *data) {
    TreeNode *node = (TreeNode *)malloc(sizeof (TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    if(NULL == *root) {
        *root = node;
        return;
    }
    while(1) {
        if(compare((*root)->data, data) > 0) {
            if((*root)->left != NULL) {
                *root = (*root)->left;
            } else {
                (*root)->left = node;
                break;
            }
        }else {
            if ((*root)->right != NULL) {
                *root = (*root)->right;
            } else {
                (*root)->right = node;
                break;
            }
        }
    }
}

TreeNode* insertNodeRecur(TreeNode *root, COMPARE compare, void *data) {
    if (root == NULL) {
        root = (TreeNode *)malloc(sizeof (TreeNode));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }

    if (compare(root->data, data) > 0) {
        root->left = insertNodeRecur(root->left, compare, data);
    }else {
        root->right = insertNodeRecur(root->right, compare, data);
    }
    return root;
}
