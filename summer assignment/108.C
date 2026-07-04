#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("===== Marksheet Generation System =====\n");

    // Input Student Details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);
    printf("Subject 2: ");
    scanf("%f", &m2);
    printf("Subject 3: ");
    scanf("%f", &m3);
    printf("Subject 4: ");
    scanf("%f", &m4);
    printf("Subject 5: ");
    scanf("%f", &m5);

    // Calculate Total and Percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Display Marksheet
    printf("\n===== MARKSHEET =====\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    // Grade Calculation
    if (percentage >= 90)
        printf("Grade       : A+\n");
    else if (percentage >= 75)
        printf("Grade       : A\n");
    else if (percentage >= 60)
        printf("Grade       : B\n");
    else if (percentage >= 40)
        printf("Grade       : C\n");
    else
        printf("Grade       : F (Fail)\n");

    return 0;
}