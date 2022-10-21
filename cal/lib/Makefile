.PHONY : libtest_dynamic_calc.so.1.0.1
libtest_dynamic_calc.so.1.0.1 : add.o subtract.o multiply.o divide.o
	gcc --shared -Wl,-soname,libtest_dynamic_calc.so.2 -o libtest_dynamic_calc.so.1.0.1 add.o subtract.o multiply.o divide.o
	ln -s libtest_dynamic_calc.so.1.0.1 libtest_dynamic_calc.so.2
add.o : add.c
	gcc -c add.c
subtract.o : subtract.c
	gcc -c subtract.c
multiply.o : multiply.c
	gcc -c multiply.c
divide.o : divide.c
	gcc -c divide.c
clean : 
	rm -f libtest_dynamic_calc.so.1.0.1 add.o subtract.o multiply.o divide.o
