#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 *
 * @n: number of bytes.
 * @b: the constant byte.
 * @s: a pointer to an area that the byte will be copied to.
 *
 * Return: pointer to the area that the byte will be copied to.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; j < n; j++)
		*(s + j) = b;
	return (s);
}

/**
 * main - tests the code.
 *
 * Return: 0.
 */

int main(void)
{
	int x = 5;
	int i;
	int y;
	char *ans = _memset((char *) &y, (char ) x, sizeof(x));

	for (i = 0; i < sizeof(x); i++)
		printf("%d\n", *(ans + i));
	printf("\n");
	for (i = 0; i < sizeof(x); i++)
		printf("%d\n", *((char *) &y + i));
}
