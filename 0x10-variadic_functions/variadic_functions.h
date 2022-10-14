#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
int main(void);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
