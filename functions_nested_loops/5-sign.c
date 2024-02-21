#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: - integer value
 * Return: 1 if n greater 0, 0 if n equal to 0, -1 if n less than 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
		else if (n == 0)
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
