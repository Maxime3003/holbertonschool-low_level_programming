#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last caracter
 * @x : parameter for the fonction
 * Return: Return the value of the last digit
 */

int print_last_digit(int m)

{
	int x = m % 10;

	if(x < 0)
	{	
		x = x * -1;
	}
	_putchar('0' + x);

	return (x);
}
