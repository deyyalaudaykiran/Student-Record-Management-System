#include"header.h"
void stud_delete_all(sll **ptr)
{
        if(*ptr==0)
        {
                printf("NO RECORDS FOUND\n");
                return ;
        }
        int c=1;
        sll *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                printf("deleted node : %d  \n",c++);
                sleep(1);
                free(del);
                del=*ptr;
        }
        printf("DELETED ALL THE NODES \n");
}

