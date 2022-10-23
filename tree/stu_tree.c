#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>



typedef struct{

	char* name;
	int mid_score;
	int end_score;


}Stu_info;

int compare(const void *cp1, const void *cp2){
	return strcmp(((Stu_info*)cp1)->name, ((Stu_info*)cp2)->name);
}

void output_student(const void *student, VISIT order, int level) {
	if(order == preorder || order == leaf) {
		printf("\nName : %s\nmid_score : %d\nend_score : %d\n",(*(Stu_info**)student)->name, (*(Stu_info**)student)->mid_score, (*(Stu_info**)student)->end_score);
	}
}


int main()
{

	Stu_info *root = NULL;
	int n;
	
	
	printf("\nStudent count : ");
	scanf("%d", &n);
	
	char *name = (char *)malloc(sizeof(char) * 16);
	Stu_info *stu_table = (Stu_info*)malloc(n * sizeof(Stu_info));
	
	Stu_info **ret;
	
	
	// Input info
	for(int i = 0; i < n ; i++)
	{
	
		printf("Name : ");
		scanf("%s",name);
		stu_table->name = name;
		
		printf("Mid score : ");
		scanf("%d",&stu_table->mid_score);
		
		printf("End score : ");
		scanf("%d",&stu_table->end_score);

		
		ret = (Stu_info**) tsearch((void *) stu_table, (void **) &root, compare);
		
		if(*ret == stu_table) {
			printf("\n [ Registerd Stuednet Info ] \n\n");
			name += strlen(name)+1 ;
			stu_table++;
		} else {
			printf("\n [ Error : Overlap same name ] \n\n");
			i--;
		}		
	}
	
	
	printf("\n--------------------------------------\n");
	printf("\n [ Student Information ] \n\n");
	twalk((void *) root, output_student);
	printf("\n--------------------------------------\n");
		
	return 0;
}
