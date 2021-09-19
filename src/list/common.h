//
// Created by kali on 9/17/21.
//

#ifndef DATA_STRUCTURES_IN_C_COMMON_H
#define DATA_STRUCTURES_IN_C_COMMON_H
// function pointer to display the values
typedef void(*DISPLAY)(void *);
// function pointer to compare two values
typedef int(*COMPARE)(void*, void*);
void printDashes(unsigned char number_of_dashes);
#endif //DATA_STRUCTURES_IN_C_COMMON_H
