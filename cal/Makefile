dynamic_calc_make : dl_calc.o
	gcc -o dynamic_calc_make -rdynamic dl_calc.o -ldl
dl_calc.o : dl_calc.c
	gcc -c dl_calc.c
clean :
	rm -f dynamic_calc_make dl_calc.c
