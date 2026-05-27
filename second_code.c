#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Adding numbers
    sum = num1 + num2 + num3;

    // Displaying result
    printf("Sum = %d", sum);

    return 0;
}