#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\nQ2. How many days are there in a leap year?\n");
    printf("1. 365\n2. 364\n3. 366\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\nQ3. Which language is used for C programming?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Display Result
    printf("\n===== Quiz Result =====\n");
    printf("Your Score: %d out of 3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}