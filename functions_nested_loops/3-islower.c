#include "main.h"

/**
 * _islower - checks the lowercase
 * @c: - integer value
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	return (1);
		else
		return (0);
}
