#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    int result = 1;

    printf("Please enter x: ");
    scanf("%d", &x);

    printf("Please enter y: ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }

    printf("The result of x to the power of y is %d .", result);
}