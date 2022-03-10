#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc;
	int num;
	long xyz;
	long long xyzxyz;
	float point;

	printf("Size of a char: %lu byte(s)\n", sizeof(abc));
	printf("Size of an int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", sizeof(xyz));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(xyzxyz));
	printf("Size of a float: %lu byte(s)\n", sizeof(point));

	return (0);
}
