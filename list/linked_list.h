//
// Created by Sujay Bhowmick on 9/12/21.
//

#ifndef DATA_STRUCTURES_IN_C_LINKED_LIST_H
#define DATA_STRUCTURES_IN_C_LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>

struct Node {
    void *data;
    struct Node *next;
};
void add(struct Node **head_ref, void *data, size_t data_size);
void clear(struct Node *head_ref);
void print(struct Node *node, void (*fptr)(void *));
void print_string(void *data);

#endif //DATA_STRUCTURES_IN_C_LINKED_LIST_H
