#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array name
 * @n: number of elements of the array to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
	}
	if (i == (n - 1))
	{
		_putchar(a[n - 1] + '0');
	}
	_putchar('\n');
}
