#include <stdio.h>
/**
 * main - Prints all possible combinations contained in a pair of
 * two values 
(*
 * Return: 0 on success.
 */

int main(void)
{
	int i, k;

	for (i = 0; i <= 99; i++)
	{
		for (k = 0; k <= 99; k++)
		{
			if (i < k && i != k)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				if (i != 98 || k != 99)
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
