#include <stdlib.h>
#include "main.h"
/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @num1: already allocated size
 * @num2: new size to allocate
 * Return: pointer to newly allocated memory or null
 **/
void *_realloc(void *ptr, unsigned int num1, unsigned int num2)
{
	unsigned char *mul;
	unsigned int i;

	if (num2 == num1)
		return (ptr);
	if (num2 == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(num2 * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	mul = malloc(num2 * sizeof(char));
	if (mul == NULL)
		return (NULL);
	i = 0;
	if (num2 > num1)
	{
		while (i < num1)
		{
			mul[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (mul);
	}
/* if num2 < num1 */
	while (i < num2)
	{
		mul[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (mul);
}
