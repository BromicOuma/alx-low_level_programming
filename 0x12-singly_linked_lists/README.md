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
