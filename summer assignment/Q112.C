#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c;

    printf("===== Contact Management System =====\n");

    // Input Contact Details
    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("Enter Email: ");
    scanf("%s", c.email);

    // Display Contact Details
    printf("\n===== Contact Details =====\n");
    printf("Name         : %s\n", c.name);
    printf("Phone Number : %s\n", c.phone);
    printf("Email        : %s\n", c.email);

    return 0;
}