#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)
{

	char c = 0;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
