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
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
