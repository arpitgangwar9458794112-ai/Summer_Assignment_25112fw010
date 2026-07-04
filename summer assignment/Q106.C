#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;

    printf("===== Employee Management System =====\n");

    // Input Employee Details
    printf("Enter Employee ID: ");
    scanf("%d", &e.empId);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    // Display Employee Details
    printf("\n===== Employee Record =====\n");
    printf("Employee ID   : %d\n", e.empId);
    printf("Employee Name : %s\n", e.name);
    printf("Salary        : %.2f\n", e.salary);

    return 0;
}