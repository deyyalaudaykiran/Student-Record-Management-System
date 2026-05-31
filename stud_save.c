#include "header.h"
void stud_save(sll *ptr)
{
    char choice;
    printf("S/s:Save & exit\nE/e:Exit without saving\n");
    printf("Enter your choice:\n");
    scanf(" %c", &choice);

    if(choice=='S' || choice=='s')
    {
        FILE *fp=fopen("student.data", "w");
        if(fp==0)
        {
            printf("Cannot open file for saving\n");
            return;
        }
        while(ptr)
        {
            fprintf(fp, "%d %s %.2f\n", ptr->roll, ptr->name, ptr->percentage);
            ptr=ptr->next;
        }
        fclose(fp);
        printf("Record saved to Student.data & exit successfully \n");
        exit(0);
    }
    else if(choice=='E' || choice=='e')
    {
        exit(0);
    }
}


