#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b;

    printf("===== Library Management System =====\n");

    // Input Book Details
    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    // Display Book Details
    printf("\n===== Book Record =====\n");
    printf("Book ID      : %d\n", b.bookId);
    printf("Book Title   : %s\n", b.title);
    printf("Author Name  : %s\n", b.author);
    printf("Quantity     : %d\n", b.quantity);

    if (b.quantity > 0)
        printf("Status       : Available\n");
    else
        printf("Status       : Not Available\n");

    return 0;
}