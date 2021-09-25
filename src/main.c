//
// Created by Sujay Bhowmick on 9/17/21.
//
#include <stdio.h>
#include "list/linked_list.h"
#include "queue/queue.h"
#include "stack/stack.h"
#include "tree/tree.h"
#include "employee/employee.h"
#include "common/utils.h"

int main() {
    printf("Linked list example...\n");
    LinkedList list;
    Employee *e1 = createEmployee("Iron Man", 43);
    Employee *e2 = createEmployee("Captain America", 41);
    Employee *e3 = createEmployee("Hulk", 35);
    initializeList(&list);
    addHead(&list, e1);
    addHead(&list, e2);
    addHead(&list, e3);
    printLinkedList(&list, (DISPLAY) displayEmployee);
    Node *node = getNode(&list, (COMPARE) compareEmployee, e2);
    Employee *emp = (Employee *) node->data;
    printf("Delete node \"%s\"\n\n", emp->name);
    //delete(&list, node);
    printf("List after deletion...\n\n");
    printLinkedList(&list, (DISPLAY) displayEmployee);
    freeList(&list);

    printf("Queue using linked list example...\n");
    Queue queue;
    initializeQueue(&queue);
    enqueue(&queue, e3);
    enqueue(&queue, e2);
    enqueue(&queue, e1);
    printLinkedList(&queue, (DISPLAY) displayEmployee);
    void *data = dequeue(&queue);
    printf("Dequeued %s\n", ((Employee *) data)->name);
    data = dequeue(&queue);
    printf("Dequeued %s\n", ((Employee *) data)->name);
    data = dequeue(&queue);
    printf("Dequeued %s\n", ((Employee *) data)->name);
    data = dequeue(&queue);
    printf("Dequeued %s\n", ((Employee *) data)->name);
    freeList(&list);

    printf("Stack using linked list example...\n");
    Stack stack;
    initializeStack(&stack);
    push(&stack, e1);
    push(&stack, e2);
    push(&stack, e3);
    printLinkedList(&stack, (DISPLAY) displayEmployee);
    data = pop(&stack);
    printf("Pop %s\n", ((Employee *) data)->name);
    data = pop(&stack);
    printf("Pop %s\n", ((Employee *) data)->name);
    data = pop(&stack);
    printf("Pop %s\n", ((Employee *) data)->name);
    data = pop(&stack);
    printf("Pop %s\n", ((Employee *) data)->name);
    freeList(&list);

    printf("Tree data structure\n");
    TreeNode *root = NULL;
    insertNode(&root, (COMPARE) compareEmployee, e1);
    insertNode(&root, (COMPARE) compareEmployee, e2);
    insertNode(&root, (COMPARE) compareEmployee, e3);

    printf("Tree data structure recursive insert\n");
    TreeNode *tree = NULL;
    tree = insertNodeRecur(tree, (COMPARE) compareEmployee, e1);
    tree = insertNodeRecur(tree, (COMPARE) compareEmployee, e2);
    tree = insertNodeRecur(tree, (COMPARE) compareEmployee, e3);


    freeEmployee(e1);
    freeEmployee(e2);
    freeEmployee(e3);
}

