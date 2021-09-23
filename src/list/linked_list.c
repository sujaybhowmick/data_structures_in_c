//
// Created by Sujay Bhowmick on 9/12/21.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void initializeList(LinkedList *list) {
    list->head = NULL;
    list->current = NULL;
    list->tail = NULL;
}

void addHead(LinkedList *list, void *data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    // if head is null then head and tail point to same node
    if (list->head == NULL) {
        list->tail = node;
        node->next = NULL;
    } else {
        node->next = list->head;
    }
    list->head = node;
}

void addTail(LinkedList *list, void *data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    list->tail = node;
}

Node *getNode(LinkedList *list, COMPARE compare, void *needle) {
    Node *current = list->head;
    while (current != NULL) {
        int result = compare(needle, current->data);
        if (result == 0)
            return current;
        current = current->next;
    }
    return NULL;
}

void delete(LinkedList *list, Node *node) {
    // Check if the node is a head node
    if (node == list->head) {
        // Check if head is the only node in list
        if (list->head->next == NULL) {
            list->head = list->tail = NULL;
        } else {
            list->head = list->head->next;
        }
    } else {
        Node *tmp = list->head;
        // Loop till you find the node just before the node to be deleted
        while (tmp != NULL && tmp->next != node) {
            tmp = tmp->next;
        }
        if (tmp != NULL) {
            tmp->next = node->next;
        }
    }
    free(node);
}

void freeList(LinkedList *list) {
    Node *tmp;
    while (NULL != list->head) {
        tmp = list->head;
        list->head = list->head->next;
        free(tmp);
        tmp = NULL;
    }
}
