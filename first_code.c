#include <stdio.h>
int main() {
    int a, b, sum;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calculating sum
    sum = a + b;

    // Displaying result
    printf("Sum = %d\n", sum);

    return 0;
}