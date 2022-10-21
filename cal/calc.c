#include "calc.h"
#include <stdio.h>


int main(){


	float a;
	float b;


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

	return 0;
}
