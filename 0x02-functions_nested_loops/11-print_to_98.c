#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: The number to start printing from.
 *
 * Description: This function takes an integer as input and prints all natural numbers
 *              from that number to 98, inclusive. The numbers are printed separated by
 *              commas, and the sequence is terminated with a new line character.
 *              If the input number is greater than or equal to 98, the numbers are printed
 *              in descending order. If the input number is less than or equal to 98,
 *              the numbers are printed in ascending order.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
