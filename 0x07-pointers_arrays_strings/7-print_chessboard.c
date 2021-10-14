#include "main.h"
/**
 * print_chessboard - print chessboard using letters and spaces
 * @a: vhar array that reps chessboard
 * Description: prints a huge 2d array thst resembles a chest board
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;

	while (i < 8)
	{
		j = 0;
	while (j < 8)
	{
		_putchar(a[i][j]);
		j++;
	}
		_putchar('\n');
		i++;
	}
}
