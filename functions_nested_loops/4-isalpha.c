#include "main.h"

/**
 * _isalpha - checks if it is alphabetic character
 * @c: - integer value
 * Return: 1 if c is lowercase, else 0
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
		else
		return (0);
}
