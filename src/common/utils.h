//
// Created by Sujay Bhowmick on 9/17/21.
//
#include "../list/linked_list.h"

#ifndef DATA_STRUCTURES_IN_C_UTILS_H
#define DATA_STRUCTURES_IN_C_UTILS_H

// function pointer to display the values
typedef void(*DISPLAY)(void *);

void printDashes(unsigned char number_of_dashes);

void printLinkedList(LinkedList *, DISPLAY);

#endif //DATA_STRUCTURES_IN_C_UTILS_H
