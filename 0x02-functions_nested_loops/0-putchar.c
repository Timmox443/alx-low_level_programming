#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char p[100] = "_putchar";
	
	for (i = 0; i < 8; i++)
	{
		putchar (p[i]);	
	}
	putchar ('\n');
	return (0);
}
