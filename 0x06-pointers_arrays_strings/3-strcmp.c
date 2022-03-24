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
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++

	}

	return (0);
}
