#include "main.h"

/**
 * _reverse- reverse string s in place
 * @s: array of char
 * Return: reverse string
 */

void _reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = _strlen(s)-1; i<j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

