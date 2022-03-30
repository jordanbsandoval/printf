#include "main.h"

/**
 *
 *
 *
 *
 */

int _atoi(char *s)
{
	int res = 0;
	int signo = 1;

	while (*s)
	{
		if (*(s) == '-')
			signo *= -1;
		if (*(s) >= '0' && *(s) <= '9')
		{
			res = res * 10 + *(s) - '0';
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}
	if (signo == -1)
		res = res * signo;
	return (res);
}
