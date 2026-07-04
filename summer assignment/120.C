#include <stdio.h>

#define SIZE 5

// Function Declarations
void addStudents(int roll[], char name[][50], float marks[]);
void displayStudents(int roll[], char name[][50], float marks[]);
void searchStudent(int roll[], char name[][50], float marks[]);

int main()
{
    int roll[SIZE];
    char name[SIZE][50];
    float marks[SIZE];
    int choice;

    do
    {
        printf("\n===== Student Management Mini Project =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudents(roll, name, marks);
                break;

            case 2:
                displayStudents(roll, name, marks);
                break;

            case 3:
                searchStudent(roll, name, marks);
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

// Function to Add Student Records
void addStudents(int roll[], char name[][50], float marks[])
{
    int i;

    printf("\nEnter details of %d students:\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
}

// Function to Display Student Records
void displayStudents(int roll[], char name[][50], float marks[])
{
    int i;

    printf("\n===== Student Records =====\n");
    printf("-------------------------------------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("-------------------------------------------\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d\t\t%s\t\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

// Function to Search Student by Roll Number
void searchStudent(int roll[], char name[][50], float marks[])
{
    int i, searchRoll, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < SIZE; i++)
    {
        if(roll[i] == searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Record Not Found.\n");
}