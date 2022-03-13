#include <stdio.h>
/**
 * main - prints the possible combinations of single digit values
(*
 * Return: 0 on success
 */
int main(void)
{
		int number;

		for (number = 0; number <= 9; number++)
		{
		putchar(number + '0');
		if (number < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
}
