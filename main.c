#include"header.h"
#include<stdio.h>
int main()
{
        sll *hptr=0;
        char op;
        while(1)
        {
                printf("=====*******STUDENT MENU RECORD*******=========\n");
        printf("A/a:Add a new student data\nS/s:show the student database\nD/d:delete student record\nM/m:modify student database\nV/v:save in file\nT/t:sort the student database\nL/l:Delete all the nodes\nR/r:Reverse the list\nE/e:Exit\n");
        printf("Enter the choice\n");
        scanf(" %c",&op);

        switch(op)
        {
                case 'a':case 'A':
                        stud_add(&hptr);
                        break;
                case 's':case 'S':
                        stud_show(hptr);
                        break;
                case 'd':case 'D':
                        stud_del(&hptr);
                        break;
                case 'm':case 'M':
                        stud_mod(&hptr);
                        break;
                case 'v':case 'V':
                        stud_save(hptr);
                        break;
                case 't':case 'T':
                        stud_sort(hptr);
                        break;
                case 'l':case 'L':
                        stud_delete_all(&hptr);
                        break;
                case 'r':case 'R':
                        stud_reverse(&hptr);
                        break;

                default:
                        exit(0);

        }
        }

}


