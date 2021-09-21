//
// Created by Sujay Bhowmick on 9/21/21.
//
#include "../list/linked_list.h"

#ifndef DATA_STRUCTURES_IN_C_STACK_H
#define DATA_STRUCTURES_IN_C_STACK_H
typedef LinkedList Stack;

void initializeStack(Stack *stack);

void push(Stack *stack, void *data);

void *pop(Stack *stack);

#endif //DATA_STRUCTURES_IN_C_STACK_H
