#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int i;
	int j;
	int row;
	int column;
	
	// First matrix
	int **arr_1st; 
		
	// Second matrix
	int **arr_2nd; 

	// Result matrix
	int **arr_result;


 
	printf("X : ");
	scanf("%d", &column);


	printf("Y : ");
	scanf("%d", &row);


	arr_1st = (int**)malloc(sizeof(int*) *row);	
	arr_2nd = (int**)malloc(sizeof(int*) *row);
	arr_result = (int**)malloc(sizeof(int*) *row);



	// matrix memory melloc
	for(i=0; i<row; i++)
	{
		arr_1st[i] = (int*)malloc(sizeof(int*) *column);
		arr_2nd[i] = (int*)malloc(sizeof(int*) *column);
		arr_result[i] = (int*)malloc(sizeof(int*) *column);
	}


	// First matrix Input
	printf("\n[ First Matrix Input ]\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &arr_1st[i][j]);
		}
	}
		

	// Second matrix Input
	printf("\n[ Second Matrix Input ]\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &arr_2nd[i][j]);
		}
	}
	
		
	// Result matrix
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			arr_result[i][j] = arr_1st[i][j] + arr_2nd[i][j];
		}
	}
	
	
	printf("\n\n---------------------");
	

	// First matrix printf
	printf("\n[ First matrix ]\n\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d   ", arr_1st[i][j]);
		}
			printf("\n");
	}
		
	printf("\n---------------------\n");
	
	// Second matrix printf
	printf("\n[ Second matrix ]\n\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d   ", arr_2nd[i][j]);
		}
			printf("\n");
	}
	
	
	printf("\n---------------------\n");
	
	
	// Result matrix printf
	printf("\n[ Result matrix ]\n\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d   ", arr_result[i][j]);
		}
			printf("\n");
	}
	
	
		
	// matrix free
	for(i=0; i<row; i++)
	{
		free(arr_1st[i]);
		free(arr_2nd[i]);
		free(arr_result[i]);
	}
	free(arr_1st);
	free(arr_2nd);
	free(arr_result);
		
	return 0;
}
