#include <stdio.h>

int main()
{
    int roll[5], i;
    char name[5][50];
    float marks[5];

    printf("===== Student Record System =====\n");

    // Input Student Records
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display Student Records
    printf("\n===== Student Records =====\n");
    printf("-------------------------------------------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("-------------------------------------------------\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}