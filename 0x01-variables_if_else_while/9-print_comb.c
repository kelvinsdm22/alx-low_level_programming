#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			int digits[2] = { i, j};
			int k;

			for (k = 0; k < 2; k++)
			{
				putchar(digits[k] + '0');
				if (k < 1 || j < 9)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
			
		}
	}
	return (0);
}
