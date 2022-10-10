#ifndef _SORT_H
#define _SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked
 * @n: integer
 * @prev: previous pointer
 * @next: next pointer
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
#endif