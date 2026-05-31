#include "header.h"

void stud_show(sll *ptr)
{
    if (ptr==NULL)
    {
        printf("\033[31mNo records found\033[0m\n");
        return;
    }

    printf("\033[32;21m%-7s %-25s %-10s\033[0;24m\n", "Rollno", "Name", "Percentage");
    while(ptr)
    {
        printf("\033[32m%-7d %-25s %-10.2f\033[0m\n", ptr->roll, ptr->name, ptr->percentage);
        ptr=ptr->next;
    }

    printf("\033[33mRecord displayed successfully\033[0m\n");
}


