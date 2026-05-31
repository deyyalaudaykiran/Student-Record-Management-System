#include"header.h"
void stud_add(sll **ptr)
{
    sll *new=(sll *)malloc(sizeof(sll));

    printf("Enter name:\n");
    scanf(" %[^\n]", new->name);

    printf("Enter percentage:\n ");
    scanf("%f", &new->percentage);

    static int roll;
    if(*ptr==0)
    {
            roll=1;
    }
    else
    {
            roll=roll+1;
    }

    new->roll=roll;
    new->next=NULL;

    // Insert at end
    if(*ptr==NULL)
    {
        *ptr=new;
    }
    else
    {
        sll *last=*ptr;
        while(last->next)
        {
            last=last->next;
        }
        last->next=new;
    }

    printf("Record added successfully with roll number: %d \n", roll);
}


