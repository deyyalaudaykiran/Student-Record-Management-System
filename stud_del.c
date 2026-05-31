#include"header.h"
#include<string.h>
void stud_del(sll **ptr)
{
        int op;
        printf("Enter yout choice:\n1)Delete student data based on roll number\n2)Delete student data based on name\n");
        scanf("%d",&op);
        switch(op)
        {
                case 1:
                        delete_roll(ptr);
                        break;
                case 2:
                        delete_name(ptr);
                        break;
        }


}
void delete_roll(sll **ptr)
{
        if(*ptr==0)
        {
                printf("NO RECORDS FOUND\n");
                return ;
        }
        int rn;
        printf("Enter the roll number which you want to delete:\n");
        scanf("%d",&rn);
        sll *del=*ptr,*prev;// if we want delete a node then we need to two pointers inorder to store the deleting node and that previous node
        while(del)
        {
                if(del->roll==rn)
                {
                        if(*ptr==del)// if roll number matches with first number of database
                        {
                                *ptr=del->next;
                        }
                        else//if roll number matches with middle or last in database
                        {
                                prev->next=del->next;
                        }
                        free(del);
                        return ;

                }
                prev=del;//to store the previous address for deleting
                del=del->next;//if not matches with desired roll number then move to check another node
        }

                printf("ROLL NUMBER NOT FOUND\n");
        }


void delete_name(sll **ptr)
{
        if(*ptr==0)
        {
                printf("NO RECORDS FOUND\n");
                return ;
        }
        char name[50];
        printf("Enter the name to delete:\n");
        scanf("%s",name);

        sll *del=*ptr,*prev;

        while(del)
        {
                if(strcmp(del->name,name)==0)
                {
                        if(*ptr==del)
                        {
                                *ptr=del->next;
                        }
                        else
                        {
                                prev->next=del->next;
                        }
                        free(del);
                        return;
                }
                prev=del;
                del=del->next;
        }
        printf("Name not found\n");
}

