#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 *
 * Description: This function is the entry point of the program. It calls the
 *              print_sign function with different arguments and prints the
 *              result to the standard output using the _putchar function.
 *              The return value of print_sign is converted to a character
 *              by adding '0' to it, and it is printed followed by a comma
 *              and a space. The function demonstrates the usage of print_sign
 *              function.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
