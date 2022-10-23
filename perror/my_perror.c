#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


void my_perror(const char *s)
{
	if(s == NULL)
	{
		printf("error");
	}

	else
	{
		printf("%s: my_error (No Search file of directory)\n", s);		
	}
}


int main(int argc, char *argv[])
{

	FILE *f;
	
	
	if(argc < 2)
	{
		printf("Useage : perror_use file_name\n");
		exit(1);
	}	
	
	
	if((f = fopen(argv[1], "r")) == NULL)
	{
		my_perror("Warning");
		printf("\n\n");
		
		my_perror(NULL);
		printf("\n");
		
		exit(1);
	}


	printf("Open a file \"%s\".\n", argv[1]);

	fclose(f);
}
