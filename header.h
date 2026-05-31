#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
typedef struct student
{
        int roll;
        char name[50];
        float percentage;
        struct student *next;
}sll;

void stud_add(sll **);
void stud_show(sll *);
void stud_del(sll **);
void delete_name(sll **);
void delete_roll(sll **);
void stud_mod(sll **);
void mod_roll(sll **);
void mod_name(sll **);
void mod_percentage(sll **);
void stud_save(sll *);
void stud_sort(sll *);
void sort_name(sll *);
extern int count_node(sll *);
void sort_percentage(sll *);
void stud_delete_all(sll **);
void stud_reverse(sll **);


