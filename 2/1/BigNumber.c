#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Ask for an input number
    printf("Please enter a number: ");

    // Read the input number into a variable
    int x;
    scanf("%d", &x);

    // Test the size of the number
    if (x >= 100)
        printf("That is a big number!\n");
    else
        printf("That is a small number.\n");
}
