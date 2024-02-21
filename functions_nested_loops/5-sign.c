#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: - integer value
 * Return: 1 if n is greater than 0, 0 is n is equal to 0 and -1 if n is less than 0
 */

int print_sign(int n)

{
	if (n >= 49 && n <= 57)
	{
		_putchar(43);
		return (1);
	}
		else if (n == 48)
		{
			_putchar(48);
			return (0);
		}
			else
			{
				_putchar(45);
				return (-1);
			}
}
