#include <stdio.h>

/**
 * main - prints all possible combinationsof two two-digit numbers
 * ranging from 0-99, separated by a comafollowed by a space.
 * Return: Always 0.
*/
int main(void)
{
	int i, j;
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
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

