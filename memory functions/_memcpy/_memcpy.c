#include <stdio.h>

/**
 * _memcpy - copies a number of bytes from area to another area.
 *
 * @n: number of bytes.
 * @stc: the area that we will copy from.
 * @dest: the area that we will put the copied data in.
 *
 * Return: pointer to the area that data copied to.
 */

char *_memcpy(char *dest, char *stc, unsigned int n)
{
	int j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(stc + j);

	return (dest);
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
	char *ans = _memcpy((char *) &y, (char *) &x, sizeof(x));

	for (i = 0; i < sizeof(x); i++)
		printf("%d\n", *(ans + i));
	printf("\n");
	for (i = 0; i < sizeof(x); i++)
		printf("%d\n", *((char *)&y + i));
}
