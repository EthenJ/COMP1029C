#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Read a number and then tells the user whether the number is a prime or not

    printf("Please enter a number between 1 to 10: ");

    // Read the number to a variable
    int number;
    scanf("%d", &number);

    // Test whether the number is a prime or not
    if (number == 2 || number == 3 || number == 5 || number == 7) {
        printf("Your number is a prime number!\n");
    }
    else {
        printf("Your number is not a prime number!\n");
    }
}
