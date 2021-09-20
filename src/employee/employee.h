//
// Created by Sujay Bhowmick on 9/17/21.
//

#ifndef DATA_STRUCTURES_IN_C_EMPLOYEE_H
#define DATA_STRUCTURES_IN_C_EMPLOYEE_H
typedef struct employee {
    char name[255];
    unsigned char age;
} Employee;
Employee* createEmployee(char name[], unsigned char age);
void freeEmployee(Employee *e);
int compareEmployee(Employee *e1,Employee *e2);
void displayEmployee(Employee *e1);
#endif //DATA_STRUCTURES_IN_C_EMPLOYEE_H
