#include <stdio.h>
#include <string.h>

/**
 * ispalindrome - check if the string is palindrome.
 *
 * @str: the string.
 *
 * Return: 1 if string is palindrome and 0 if not.
 */

int ispalindrome(char *str)
{
	char copy[30];
	int j, temp, n;

	strcpy(copy, str);

	n = strlen(str);

	for (j = 0; j < n - 1; j++, n--)
	{
		temp =  copy[j];
		copy[j] = copy[n - 1];
		copy[n - 1] = temp;
	}

	if (strcmp(copy, str) == 0)
		return 1;

	else
		return 0;

}

/**
 * main - test the code and print the result.
 *
 * Return: 0.
 */

int main(void)
{
	char str[30];

	printf("the program returns 1 if a string is a palindrome and 0 if not.\n");

	printf("enter your string: ");

	scanf("%s", str);

	printf(": %d\n", ispalindrome(str));
}
