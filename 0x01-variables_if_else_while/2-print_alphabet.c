#include <stdio.h>
/**
 * a to z program built by timmo in alx
 *
 * main - Entry point for alphabet a to z
 *
 * function - We are using main fucntion
 *
 * Return : always zero after sucessful completion
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
