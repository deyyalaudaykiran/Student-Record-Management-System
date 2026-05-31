#include"header.h"
#include<string.h>
void stud_mod(sll **ptr)
{
    char choice;
    float percentage;

    printf("R/r:Search by rollno\nN/n:search by name\nP/p:Search by percentage\n");
    printf("Enter your choice:\n");
    scanf(" %c", &choice);
    switch(choice)
    {
            case 'r':case 'R':
                                mod_roll(ptr);
                                break;
            case 'n':case 'N':
                                mod_name(ptr);
                                break;
            case 'p':case 'P':
                                mod_percentage(ptr);
                                break;
    }
}
void mod_roll(sll **ptr)
{
        int roll;
        printf("Enter the rollno which you want to modify:\n");
        scanf("%d", &roll);

        sll *mod=*ptr;
        while(mod)
        {
            if(mod->roll==roll)
            {
                printf("Enter new name:\n");
                scanf(" %[^\n]",mod->name);
                printf("Enter new percentage:\n");
                scanf("%f", &mod->percentage);
                printf("Record modified successfully\n");
                return;
            }
            mod=mod->next;
        }
        printf("Record not found\n");
}
void mod_name(sll **ptr)
{
        int roll,found;
        char name[30];
        printf("Enter name: \n");
        scanf(" %[^\n]", name);
        sll *mod=*ptr;
        while(mod)
        {
            if(strcmp(mod->name,name)==0)
            {
                found = 1;
                printf("Enter rollno to modify:\n");
                scanf("%d", &roll);
                if(mod->roll==roll)
                {
                    printf("Enter new name:\n");
                    scanf(" %[^\n]", mod->name);
                    printf("Enter new percentage:\n");
                    scanf("%f", &mod->percentage);
                    printf("Record modified successfully\n");
                    return;
                }
            }
            mod=mod->next;
        }
        if(!found)
        {
            printf("Record not found\n");
        }
}
void mod_percentage(sll **ptr)
{
        float per;
        int roll;
        printf("Enter percentage:\n");
        scanf("%f", &per);
        sll *mod=*ptr;
        while(mod)
        {
            if(mod->percentage==per)
            {
                printf("Enter rollno to modify:\n");
                scanf("%d", &roll);
                if(mod->roll==roll)
                {
                    printf("Enter new name:\n");
                    scanf(" %[^\n]",mod->name);
                    printf("Enter new percentage:\n");
                    scanf("%f", &mod->percentage);
                    printf("Record modified successfully\n");
                    return;
                }
            }
            mod=mod->next;
        }
        printf("Record not found\n");
}


