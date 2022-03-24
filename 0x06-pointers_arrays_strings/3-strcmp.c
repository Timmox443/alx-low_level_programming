#include "main.h"
/**
 * The function _strcmp is comparing string values
 * s1 is an input value
 * s2 is an input value too
 * \0 is zero character. In c it is mostly used to indicate the termination of acharacter string
 *
 * return : s[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;

	}

	return (*s1 - *s2);
}
