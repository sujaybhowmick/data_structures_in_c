//
// Created by Sujay Bhowmick on 9/19/21.
//
#include "../list/linked_list.h"

#ifndef DATA_STRUCTURES_IN_C_QUEUE_H
#define DATA_STRUCTURES_IN_C_QUEUE_H
typedef LinkedList Queue;

void initializeQueue(Queue *);

void enqueue(Queue *, void *);

void *dequeue(Queue *);

#endif //DATA_STRUCTURES_IN_C_QUEUE_H
