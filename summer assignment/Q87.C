#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    int visited[100] = {0};

    printf("Enter a string: ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (visited[i] == 1)
            continue;

        count = 1;

        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}