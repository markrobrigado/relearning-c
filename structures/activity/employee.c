/*
 * employee.c
 * Author:  Mark Robrigado
 * Date:    20 December 2022
 * Description: Add employee record and output employee list.   
*/

#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 8

struct Employee {                                       // Define struct Employee
    char name[30];
    char hireDate[10];
    float salary;
};

int main() {

    struct Employee emp = {"Bob", "12/19/22", 600.0};   // Initialize struct

    printf("Employee Name: %s\n", emp.name);            // Output employee details
    printf("Hiring Date: %s\n", emp.hireDate);
    printf("Salary: $%g\n", emp.salary);

    char buffer[MAX_LENGTH];

    printf("Employee Name: ");                          // Prompt user input for
    fgets(emp.name, sizeof(emp.name), stdin);           // employee name
    emp.name[strcspn(emp.name, "\n")] = 0;

    printf("Hiring Date: ");                            // Prompt user input for
    fgets(emp.hireDate, sizeof(emp.hireDate), stdin);   // employee hiring date
    emp.hireDate[strcspn(emp.hireDate, "\n")] = 0;

    printf("Salary: ");                                 // Prompt user input for
    fgets(buffer, sizeof(buffer), stdin);               // employee salary
    sscanf(buffer, "%f", &emp.salary);

    printf("Employee Name: %s\n", emp.name);            // Output employee details
    printf("Hiring Date: %s\n", emp.hireDate);
    printf("Salary: $%g\n", emp.salary);

    return 0;
}