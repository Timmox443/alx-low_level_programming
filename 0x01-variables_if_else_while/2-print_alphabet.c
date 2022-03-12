#include <stdio.h>
/**
 * a to z program
 *
 * main - alphabet a to z
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
