#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, vowel = 0, consonant = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
        i++;
    }

    printf("Number of vowels = %d\n", vowel);
    printf("Number of consonants = %d\n", consonant);

    return 0;
}