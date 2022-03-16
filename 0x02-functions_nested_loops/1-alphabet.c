#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
 void print_alphabet(void)
 {
 	int i, a;
 	
 	for (i = 0; i <= 9; i++)
 	{
 		for (a = 97; a <= 122; a++)
 		{
 			putchar(a);
		 }
	 }
	 putchar('\n');
 }
