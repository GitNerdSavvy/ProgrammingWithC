#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

void decimalToOctal(int n) {
    if (n > 0) {
        decimalToOctal(n / 8);
        printf("%d", n % 8);
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary representation: ");
    decimalToBinary(decimal);
    printf("\n");

    printf("Octal representation: ");
    decimalToOctal(decimal);
    printf("\n");

    return 0;
}