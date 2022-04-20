#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	char *ptr;
	char *ptr_tmp;
	int j, count = 0;

	formato formating[] = {
		{"c", print_c},
		{"s", print_s},
	/*	{"%", print_p},*/
		{"d", print_i},
		{"i", print_i},
		{NULL, NULL}
	};
	/*creando una copia de format para poder modificar valores*/
	ptr = _create_array(format);
	if (ptr == NULL)
		return (-1);

	ptr_tmp = ptr;
	va_start(list, format);

	while (*(ptr) != '\0')
	{
		if (*(ptr) == PORCENTAJE)
		{
			ptr++;
			j = 0;
			while (formating[j].op != NULL)
			{
				if (*(ptr) == *(formating[j].op))
				{
					count += formating[j].f(list);
					ptr++;
					break;
				}
				j++;
			}
			if (formating[j].op == NULL)
				ptr--;
		}
		count += 1;
		write(1, ptr, 1);
		ptr++;
	}

	free(ptr_tmp);
	va_end(list);
	return (count);
}
