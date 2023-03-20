#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{

	int i;
	int j;

	for (i = 0; j <= 99; i++)
	{

		for (j = 0; j <= 99; j++)
		{

			if (i < j && i != j)
			{

				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
