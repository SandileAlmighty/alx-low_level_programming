#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 *
 * Description: This function takes an integer as input and prints its last digit.
 *              If the number is negative, it converts it to a positive number
 *              before extracting the last digit. The last digit is then printed
 *              using the _putchar function. The function returns the value of the
 *              last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}

