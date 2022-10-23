#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1


int my_assert(int number)
{
	if( number == FALSE )
	{
		printf("my_assert : Not Collect number\n");
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}


void foo(int num)
{
	if (my_assert(((num >= 0) && (num <= 100))) == FALSE)
	{
		printf("foo : my_assert Error\n");
	}

	printf("\nfoo: num = %d\n", num);
}


int main(int argc, char *agrv[])
{
	int num;
	
	if(argc < 2)
	{
		fprintf(stderr, "Useage: assert_test aNumber\n(0 <= aNumber <= 100)\n");
		exit(1);
	}
	
	
	num = atoi(agrv[1]);
	foo(num);
}
