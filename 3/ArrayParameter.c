#include <stdio.h>

// Fill a 5x5 board with checker pattern
void fill(int board[5][5])
{
	int row, col;

	for (row = 0; row < 5; row++) {
		for (col = 0; col < 5; col++) {
			if (row % 2 == col % 2)
				board[row][col] = 1;
			else
				board[row][col] = 0;
		}
	}
}

// Print the content of a 5x5 board
void print(int board[5][5])
{
	int row, col;

	for (row = 0; row < 5; row++) {
		for (col = 0; col < 5; col++) {
			printf("%2d", board[row][col]);
		}
		printf("\n");
	}
}

int main()
{
	// Initialize a 2D array with zeros
	int checkerboard[5][5] = {
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 }
	};

	// Print the board before filling
	printf("Initial values:\n\n");
	print(checkerboard);

	// Fill the array with checker pattern
	fill(checkerboard);

	// Print the board after filling
	printf("\nAfter filling:\n\n");
	print(checkerboard);
}