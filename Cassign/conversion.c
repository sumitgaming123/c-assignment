#include <stdio.h>

// Function to print binary equivalent using bitwise operators
void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2);
}

// Function to print octal equivalent using recursion
void printOctal(int num) {
    if (num != 0) {
        printOctal(num / 8);
        printf("%d", num % 8);
    }
}

// Function to print hexadecimal equivalent using recursion
void printHexadecimal(int num) {
    if (num != 0) {
        printHexadecimal(num / 16);
        int remainder = num % 16;
        if (remainder < 10) {
            printf("%d", remainder);
        } else {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

int main() {
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);
    printf("Binary equivalent: ");
    printBinary(num);
    printf("\n Octal equivalent: ");
    printOctal(num);
    printf("\n Hexadecimal equivalent: ");
    printHexadecimal(num);

    return 0;
}
