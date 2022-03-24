#include "main.h"

/**
 * _strncpy - copies a string
 * @dest : The string destination
 * @src: the string source
 * @n : The byte number to be copied
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

