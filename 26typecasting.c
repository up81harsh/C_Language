//08.02.23
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the integer value:");
	scanf("%d", &a);
	float b;
	printf("Enter the float value:");
	scanf("%f", &b);
//	TYPECASTING MEANS CONVERTING TYPE OF DATA TYPES
	printf("\n");
	printf("Typecasting in float\n");
	printf("\n");
	printf("Value of a: %d\n", a);
	printf("Value of a in float: %f\n", (float) a);
	printf("\n");
	printf("Typecasting in integer\n");
	printf("\n");
	printf("Value of b: %f\n", b);
	printf("Value of b in int:%d\n", (int) b);
	return 0;
}
