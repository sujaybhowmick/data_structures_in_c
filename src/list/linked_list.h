//
// Created by Sujay Bhowmick on 9/12/21.
//

#ifndef DATA_STRUCTURES_IN_C_LINKED_LIST_H
#define DATA_STRUCTURES_IN_C_LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

typedef struct node {
    void *data;
    struct node *next;
} Node;

typedef struct linkedList {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;

void initializeList(LinkedList*);
void addHead(LinkedList*, void*);
void addTail(LinkedList*, void*);
void delete(LinkedList*, Node*);
Node *getNode(LinkedList*, COMPARE, void*);
void printLinkedList(LinkedList*, DISPLAY);
#endif //DATA_STRUCTURES_IN_C_LINKED_LIST_H
