#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main()
{
    struct Book book[3];
    int i;

    printf("===== Mini Library System =====\n");

    // Input Book Details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);

        printf("Enter Status (0 = Available, 1 = Issued): ");
        scanf("%d", &book[i].issued);
    }

    // Display Book Records
    printf("\n===== Library Books =====\n");
    printf("------------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d\t%s\t\t%s\t\t",
               book[i].bookId,
               book[i].title,
               book[i].author);

        if(book[i].issued == 0)
            printf("Available\n");
        else
            printf("Issued\n");
    }

    return 0;
}