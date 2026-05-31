#include "header.h"
void stud_reverse(sll **ptr)
{
    sll *prev=NULL,*next=NULL,*current=*ptr;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *ptr=prev;
    printf("List reversed successfully\n");
}

