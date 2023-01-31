##SINGLY LINKED LIST
Used I maintaining a list in a memory. A single linked list is forward navigation only \
made up of interconnected nodes each having  a structure made up of data element \
and pointer to the next structure memory address. Although array is faster in acess it's not so 
efficient for deletion and insertion operations. Thus a linked list is made up of pointer and data that 
is either NULL or Data followed by list.

example:
typedef struct person person{
char name [30];
person *next;
}
0. Print list

mandatory

Score: 0.0% (Checks completed: 0.0%)

Write a function that prints all the elements of a list_t list.



Prototype: size_t print_list(const list_t *h);

Return: the number of nodes

Format: see example

If str is NULL, print [0] (nil)

You are allowed to use printf

julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c

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

    list_t *head;

    list_t *new;

    list_t hello = {"World", 5, NULL};

    size_t n;



    head = &hello;

    new = malloc(sizeof(list_t));

    if (new == NULL)

    {

        printf("Error\n");

        return (1);

    }

    new->str = strdup("Hello");

    new->len = 5;

    new->next = head;

    head = new;

    n = print_list(head);

    printf("-> %lu elements\n", n);



    printf("\n");

    free(new->str);

    new->str = NULL;

    n = print_list(head);

    printf("-> %lu elements\n", n);



    free(new);

    return (0);

}

julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a

julien@ubuntu:~/0x12. Singly linked lists$ ./a 

[5] Hello

[5] World

-> 2 elements



[0] (nil)

[5] World

-> 2 elements

julien@ubuntu:~/0x12. Singly linked lists$ 
