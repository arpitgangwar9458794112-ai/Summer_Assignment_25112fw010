#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[3];
    int i;

    printf("===== Mini Employee Management System =====\n");

    // Input Employee Details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Department: ");
        scanf("%s", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display Employee Records
    printf("\n===== Employee Records =====\n");
    printf("---------------------------------------------------------\n");
    printf("ID\tName\t\tDepartment\tSalary\n");
    printf("---------------------------------------------------------\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }

    return 0;
}