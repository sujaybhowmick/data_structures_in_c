//
// Created by Sujay Bhowmick on 9/12/21.
//
#include "linked_list.h"

void add(struct Node **head_ref, void *data, size_t data_size)
{
    struct Node *new_node = (struct Node*)malloc(sizeof (struct Node));
    new_node->data = malloc(data_size);
    new_node->next = *head_ref;
    for (int i = 0; i < data_size; i++) {
        *(char *)(new_node->data + i) = *(char *)(data + i);
    }
    *head_ref = new_node;
}

void clear(struct Node *head_ref)
{
    if(head_ref->next != NULL) clear(head_ref->next);
    free(head_ref->data);
    free(head_ref);
    head_ref = NULL;
}

void print(struct Node *node, void (*fptr)(void *))
{
    while (node != NULL)
    {
        (*fptr)(node->data);
        node = node->next;
    }
}

void print_int(void *data)
{
    printf("%d\n", *(int *)data);
}

void print_string(void *data)
{
    for (int i = 0; *(char *)(data + i ) != '\0'; ++i)
    {
        printf("%c", *(char *)(data + i));
    }
}
