#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, remainder, power = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, power);
        binary /= 10;
        power++;
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}