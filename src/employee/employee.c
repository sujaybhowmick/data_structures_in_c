//
// Created by kali on 9/17/21.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "employee.h"

Employee* createEmployee(char name[], unsigned char age)
{
    Employee *e1 = (Employee*) malloc(sizeof(Employee));
    strcpy(e1->name, name);
    e1->age = age;
    return e1;
}

void freeEmployee(Employee *e)
{
    free(e);
}

int compareEmployee(Employee *e1, Employee *e2) {
    return strcmp(e1->name, e2->name);
}

void displayEmployee(Employee *employee) {
    printf("%s", employee->name);
    for(int i = 0; i < (55 - strlen(employee->name)); i++){
        printf("%s", " ");
    }
    printf("%d\n", employee->age);
}
