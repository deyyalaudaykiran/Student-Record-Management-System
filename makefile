exe:main.o stud_add.o stud_show.o stud_del.o stud_mod.o stud_save.o stud_sort.o stud_delete_all.o stud_reverse.o
	cc main.o stud_add.o stud_show.o stud_del.o stud_mod.o stud_save.o stud_sort.o stud_delete_all.o stud_reverse.o -o exe



main.o:main.c
	cc -c main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_show.o:stud_show.c
	cc -c stud_show.c
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_mod.o:stud_mod.c
	cc -c stud_mod.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_sort.o:stud_sort.c
	cc -c stud_sort.c
stud_delete_all.o:stud_delete_all.c
	cc -c stud_delete_all.c
stud_reverse.o:stud_reverse.c
	cc -c stud_reverse.c

clear :
	@echo "cleaning up...."
	@rm-r *.o

