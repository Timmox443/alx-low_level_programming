#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
 void print_alphabet(void)
 {
 	char abc = 'a';
 	
 	while (abc <='z')
 	{
 		putchar(abc);
 		abc++;
	 }
	 putchar('\n');
	 
	 return (0);
 }
