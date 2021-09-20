//
// Created by Sujay Bhowmick on 9/20/21.
//

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initializeQueue(Queue *queue) {
    initializeList(queue);
}

void enqueue(Queue *queue, void *data) {
    addHead(queue, data);
}

void *dequeue(Queue *queue) {
    Node *tmp = queue->head;
    void *data;
    if (queue->head == NULL) {
        data = NULL;
    } else if (queue->head == queue->tail) {
        queue->head = queue->tail = NULL;
        data = tmp->data;
        free(tmp);
    } else {
        while (tmp->next != queue->tail) {
            tmp = tmp->next;
        }
        queue->tail = tmp;
        tmp = tmp->next;
        queue->tail->next = NULL;
        data = tmp->data;
        free(tmp);
    }
    return data;
}