#ifndef VARIADIAC_FUNCTIONS_H
#define VARIADIAC_FUNCTIONS_H

#include <strarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
