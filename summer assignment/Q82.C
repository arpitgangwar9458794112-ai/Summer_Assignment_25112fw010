#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Find string length
    while (str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string: ");

    // Print string in reverse
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}