#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stdio.h>
int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif