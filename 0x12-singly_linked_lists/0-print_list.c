#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - this prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: number of nodes printed
=======
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
>>>>>>> b8b891f8212646046193e7ec4d0e19b0c6b086cb
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
<<<<<<< HEAD
=======

>>>>>>> b8b891f8212646046193e7ec4d0e19b0c6b086cb
	return (s);
}
