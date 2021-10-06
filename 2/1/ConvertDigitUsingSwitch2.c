#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// Ask for a number
	printf("Please enter a number between 0 to 99: ");
	int digit;
	scanf("%d", &digit);
	digit = digit / 10;

	// Convert the number to an English word;
	switch (digit) {
	case 0:
		printf("");
		break;
	case 1:
		printf("Ten\n");
		break;
	case 2:
		printf("Twenty\n");
		break;
	case 3:
		printf("Thirty\n");
		break;
	case 4:
		printf("Forty\n");
		break;
	case 5:
		printf("Fifty\n");
		break;
	case 6:
		printf("Sixty\n");
		break;
	case 7:
		printf("Seventy\n");
		break;
	case 8:
		printf("Eighty\n");
		break;
	case 9:	
		printf("Ninety\n");
		break;
	default:
		printf("Hey, the number is not in the range 0 to 99!\n");
	}
}
