More on singly linked List
0. Print list

mandatory

Write a function that prints all the elements of a listint_t list.



Prototype: size_t print_listint(const listint_t *h);

Return: the number of nodes

Format: see example

You are allowed to use printf

julien@ubuntu:~/0x13. More singly linked lists$ cat 0-main.c 

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"



/**

 * main - check the code

 * 

 * Return: Always 0.

 */

int main(void)

{

    listint_t *head;

    listint_t *new;

    listint_t hello = {8, NULL};

    size_t n;



    head = &hello;

    new = malloc(sizeof(listint_t));

    if (new == NULL)

    {

        printf("Error\n");

        return (1);

    }

    new->n = 9;

    new->next = head;

    head = new;

    n = print_listint(head);

    printf("-> %lu elements\n", n);

    free(new);

    return (0);

}

julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a

julien@ubuntu:~/0x13. More singly linked lists$ ./a 

9

8

-> 2 elements

julien@ubuntu:~/0x13. More singly linked lists$ 


1. List length

mandatory

Write a function that returns the number of elements in a linked listint_t list.



Prototype: size_t listint_len(const listint_t *h);

julien@ubuntu:~/0x13. More singly linked lists$ cat 1-main.c 

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"



/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

    listint_t *head;

    listint_t *new;

    listint_t hello = {8, NULL};

    size_t n;



    head = &hello;

    new = malloc(sizeof(listint_t));

    if (new == NULL)

    {

        printf("Error\n");

        return (1);

    }

    new->n = 9;

    new->next = head;

    head = new;

    n = listint_len(head);

    printf("-> %lu elements\n", n);

    free(new);

    return (0);

}

julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b

julien@ubuntu:~/0x13. More singly linked lists$ ./b 

-> 2 elements

julien@ubuntu:~/0x13. More singly linked lists$ 
