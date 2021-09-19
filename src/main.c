#include "list/linked_list.h"
#include "employee/employee.h"

int main() {
    LinkedList list;
    Employee *e1 = createEmployee("Iron Man", 43);
    Employee *e2 = createEmployee("Captain America", 41);
    Employee *e3 = createEmployee("Hulk", 35);
    initializeList(&list);
    addHead(&list, e1);
    addHead(&list, e2);
    addHead(&list, e3);
    printLinkedList(&list, (DISPLAY)displayEmployee);
    Node *node = getNode(&list, (COMPARE)compareEmployee, e2);
    Employee *emp = (Employee *)node->data;
    printf("Delete node \"%s\"\n\n", emp->name);
    delete(&list, node);
    printf("List after deletion...\n\n");
    printLinkedList(&list, (DISPLAY) displayEmployee);
    freeEmployee(e1);
    freeEmployee(e2);
    freeEmployee(e3);
}

