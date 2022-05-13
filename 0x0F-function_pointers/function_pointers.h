#ifndef FUNCTION_POINTERS_H_INCLUDED
#define FUNCTION_POINTERS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

#endif
