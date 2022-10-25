#ifndef LISTS_H
#define LISTS_H

/*********LIBRARIES******/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********STRUCTURES*********/

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed)
 * @len: length of string
 * @next: pointer to next node
 *
 * Description - defined data structure for singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*********FUNCTIONS PROTOTYPES********/
int _putchar(char c);
int main(void);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(char *str);

#endif
