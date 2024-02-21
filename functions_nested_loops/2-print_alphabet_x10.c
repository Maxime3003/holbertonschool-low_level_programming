#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n, m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		_putchar(m);

	_putchar('\n');
	}
}
