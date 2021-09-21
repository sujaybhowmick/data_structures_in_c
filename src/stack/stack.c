//
// Created by Sujay Bhowmick on 9/21/21.
//
#include <stdlib.h>
#include "stack.h"

void initializeStack(Stack *stack) {
    stack->head = NULL;
    stack->current = NULL;
    stack->tail = NULL;
}

void push(Stack *stack, void *data) {
    addHead(stack, data);
}

void *pop(Stack *stack) {
    Node *tmp = stack->head;
    void *data;
    if(stack->head == NULL) {
        return NULL;
    } else if (stack->head == stack->tail) {
        data = tmp->data;
        stack->head = stack->tail = NULL;
        free(tmp);
        return data;
    } else {
        stack->head = stack->head->next;
        data = tmp->data;
        free(tmp);
        return data;
    }
}