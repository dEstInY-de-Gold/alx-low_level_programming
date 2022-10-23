#ifndef LISTS_H
#define LISTS_H

/*********LIBRARIES******/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********STRUCTURES*********/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

/*********FUNCTIONS PROTOTYPES********/
int _putchar(char c);
int main(void);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
