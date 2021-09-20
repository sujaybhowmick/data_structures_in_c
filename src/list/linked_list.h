//
// Created by Sujay Bhowmick on 9/12/21.
//

#ifndef DATA_STRUCTURES_IN_C_LINKED_LIST_H
#define DATA_STRUCTURES_IN_C_LINKED_LIST_H

// function pointer to compare two values
typedef int(*COMPARE)(void *, void *);

typedef struct node {
    void *data;
    struct node *next;
} Node;

typedef struct linkedList {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;

void initializeList(LinkedList *);

void addHead(LinkedList *, void *);

void addTail(LinkedList *, void *);

void delete(LinkedList *, Node *);

Node *getNode(LinkedList *, COMPARE, void *);

#endif //DATA_STRUCTURES_IN_C_LINKED_LIST_H
