#ifndef _SRCH_H_
#define _SRCH_H_

#include <stdio.h>
#include <math.h>

int main(void);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* Search algorithms */
