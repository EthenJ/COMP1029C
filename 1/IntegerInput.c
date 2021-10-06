#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int input;

    // Print the prompting text
    printf("Please enter an integer: ");

    // Read the user input into the variable input
    scanf("%d", &input);

    // Print out the input value
    printf("You have entered %d.\n", input);
}
