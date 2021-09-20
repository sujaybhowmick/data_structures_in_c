//
// Created by Sujay Bhowmick on 9/19/21.
//
#include <stdio.h>
#include "utils.h"

void printDashes(unsigned char number_of_dashes) {
    for (int i = 0; i < number_of_dashes; i++) {
        printf("%s", "-");
    }
    printf("%s\n", "");
}

void printLinkedList(LinkedList *list, DISPLAY display) {
    printf("Name");
    for (int i = 0; i < 50; i++) {
        printf("%s", " ");
    }
    printf("Age\n");
    printDashes(60);
    Node *current = list->head;
    while (current != NULL) {
        display(current->data);
        current = current->next;
    }
    printDashes(60);
}
