#include"header.h"
#include<string.h>
void stud_sort(sll *ptr)
{
        char choice;
        printf("Enter your choice for sorting\nN/n:sorting with name\np/P:sorting with percentage\n");
        scanf(" %c",&choice);
        switch(choice)
        {
                case 'n':case 'N':
                                sort_name(ptr);
                                break;
                case 'p':case 'P':
                                sort_percentage(ptr);
                                break;
        }
}

void sort_name(sll *ptr)
{
        if(ptr==0)
        {
                printf("NO RECORDS FOUND\n");
                return;
        }
        sll *p1=ptr,*p2,t;
        int i,j,c=count_node(ptr);
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if(strcmp(p1->name,p2->name)>0)
                        {
                                t.roll=p1->roll;
                                strcpy(t.name,p1->name);
                                t.percentage=p1->percentage;

                                p1->roll=p2->roll;
                                strcpy(p1->name,p2->name);
                                p1->percentage=p2->percentage;

                                p2->roll=t.roll;
                                strcpy(p2->name,t.name);
                                p2->percentage=t.percentage;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
}
void sort_percentage(sll *ptr)
{
        if(ptr==0)
        {
                printf("NO RECORDS FOUND\n");
                return;
        }
        sll *p1=ptr,*p2,t;
        int i,j,c=count_node(ptr);
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if(p1->percentage < p2->percentage)
                        {
                                t.roll=p1->roll;
                                strcpy(t.name,p1->name);
                                t.percentage=p1->percentage;

                                p1->roll=p2->roll;
                                strcpy(p1->name,p2->name);
                                p1->percentage=p2->percentage;

                                p2->roll=t.roll;
                                strcpy(p2->name,t.name);
                                p2->percentage=t.percentage;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
}
int count_node(sll *ptr)
{
        int c=0;
        while(ptr)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}


