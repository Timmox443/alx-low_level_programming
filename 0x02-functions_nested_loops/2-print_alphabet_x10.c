#include <stdio.h>

/**
 * 
 * printing a to z 10 times
 * main - check the code
 *
 * Return: Always 0.
 */
 
 void print(void)
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
