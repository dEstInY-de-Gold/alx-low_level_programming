#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_pow.c"

int _putchar(char c);
int _pow(int x, int y);
int main(void);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
