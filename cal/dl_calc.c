#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>


int main(){


	void *handle;
	
	
	float (*add)(float, float);
	float (*subtract)(float, float);
	float (*multiply)(float, float);
	float (*divide)(float, float);
	
	
	float a;
	float b;
	char *error;
	
	handle = dlopen("./lib/libtest_dynamic_calc.so.2", RTLD_LAZY);
	
	if(!handle)
	{
		fputs(dlerror(), stderr);
	}
	
	
	// add
	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}


	// subtract
	subtract = dlsym(handle, "subtract");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	
	// multiply
	multiply = dlsym(handle, "multiply");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	
	// divide
	divide = dlsym(handle, "divide");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	printf("동적 계산기\n");
	printf("첫 번째 : ");
	scanf("%f", &a);

	printf("두 번째 : ");
	scanf("%f", &b);
	
	
	printf("\n[ Add ]\n");
	printf("%lf + %f = %lf\n", a, b, add(a, b));

	printf("\n[ Subtract ]\n");
	printf("%f - %f = %f\n", a, b, subtract(a, b));
	
	printf("\n[ Multiply ]\n");
	printf("%f * %f = %f\n", a, b, multiply(a, b));
	
	printf("\n[ Divide ]\n");
	printf("%f / %f = %f\n", a, b, divide(a, b));

	dlclose(handle);

	return 0;
}
