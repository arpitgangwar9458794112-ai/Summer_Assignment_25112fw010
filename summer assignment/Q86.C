#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != '\n' && str[0] != '\0')
        count = 1;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ' &&
            str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            count++;
        }
        i++;
    }

    printf("Number of words = %d\n", count);

    return 0;
}