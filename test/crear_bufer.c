#include "main.h"

/**
 * _strdup- funcion that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *@str: pointer to string from copy
 *Return: pointer to the new string created
 */

char *_create_array(const char *str)
{
	int len_string = _strlen(str);
	char *new_str = NULL;

	new_str = malloc(sizeof(char) * len_string);

	if (new_str == NULL)
		return (NULL);

	_copiar(new_str, str);

	return (new_str);
}
