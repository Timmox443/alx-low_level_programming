#include <stdio.h>
#include "main.h"

/**
 * 
 * printing a to z 10 times
 * - check the code
 *
 * Return: Always 0.
 */
 
 void print_alphabet_x10(void)
 {
 	int i, abc;
	
		for (i=0;i<10;i++)
		{
		for (abc =97; abc <= 122; abc++)
		{
	 		putchar(abc);
		}
			putchar('\n');
		}
 }
