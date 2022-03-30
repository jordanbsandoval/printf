#include "main.h"

char *_copiar(char *to, const char *from)
{
	int i;
	for (i = 0; (*(to + i) = *(from + i)) != '\0'; i++)
		;
	return (to);
}
