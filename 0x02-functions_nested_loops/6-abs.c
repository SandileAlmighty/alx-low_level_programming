#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to check.
 *
 * Return: The absolute value of the integer.
 *
 * Description: This function takes an integer as input and computes its absolute
 *              value. If the integer is positive or zero, it returns the integer itself.
 *              If the integer is negative, it returns the negation of the integer.
 */
int _abs(int n)
	{
		if (n >= 0)
		{
			return (n);
		}
		return (-n);
	}
