<<<<<<< HEAD
#ifndef LIST_H
#define LIST_H
=======
#ifndef LISTS_H
#define LISTS_H
>>>>>>> b8b891f8212646046193e7ec4d0e19b0c6b086cb

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
<<<<<<< HEAD
 * @len: length of string
 * @next: points to next node
 *
 * Description: Singly linked lists node structure
=======
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
>>>>>>> b8b891f8212646046193e7ec4d0e19b0c6b086cb
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
