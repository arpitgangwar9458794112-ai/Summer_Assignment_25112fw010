#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0;
    int maxLen = 0, currentLen = 0, start = 0, k;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            currentLen++;
        }
        else
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;

                for (k = 0; k < currentLen; k++)
                {
                    longest[k] = str[start + k];
                }
                longest[currentLen] = '\0';
            }

            currentLen = 0;
            start = i + 1;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", maxLen);

    return 0;
}