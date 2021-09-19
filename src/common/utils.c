//
// Created by kali on 9/19/21.
//
#include <stdio.h>

void printDashes(unsigned char number_of_dashes) {
    for(int i = 0; i < number_of_dashes; i++){
        printf("%s", "-");
    }
    printf("%s\n", "");
}