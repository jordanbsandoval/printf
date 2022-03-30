#include "main.h"

int print_c(va_list list)
{
	char tmp = va_arg(list, int);
	write(1, &tmp, 1);
	return (1);
}

int print_s(va_list list)
{
	int i;
	char *tmp = va_arg(list, char *);
	if (tmp == NULL)
		return (0);
	
	for (i = 0; *(tmp + i) != '\0'; i++)
		write(1, tmp + i, 1);
	return (i);
}
