#include "list/linked_list.h"
#include "employee/employee.h"

int main() {
    LinkedList list;
    Employee *e1 = createEmployee("Sujay Bhowmick", 43);
    Employee *e2 = createEmployee("Annette Stephens Bhowmick", 41);
    Employee *e3 = createEmployee("Kiaan Bhowmick", 8);
    initializeList(&list);
    addHead(&list, e1);
    addHead(&list, e2);
    addHead(&list, e3);
    printLinkedList(&list, (DISPLAY)displayEmployee);
    Node *node = getNode(&list, (COMPARE)compareEmployee, e2);
    Employee *emp = (Employee *)node->data;
    printf("%s\t%d\n", emp->name, emp->age);
    delete(&list, node);
    printLinkedList(&list, (DISPLAY) displayEmployee);
    freeEmployee(e1);
    freeEmployee(e2);
    freeEmployee(e3);
}

