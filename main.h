#ifndef PRINTF_H
#define PRINTF_H
/*Librarys*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count;

typedef struct formato{
	char *op;
	int (*f)(va_list);
}formato;

/*prototypes*/
int _printf(const char *format, ...);
int _strlen(const char *);
char *_copiar(char *, const char *);
char *_create_array(const char *);
void _imprimir(char *, va_list);
int print_c(va_list);
int print_s(va_list);
int print_i(va_list);
int _atoi(char *);


#endif
