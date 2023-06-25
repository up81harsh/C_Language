#include<stdio.h>
int main()
{
	float a, b, c, d;
	printf("Enter the number:");
	scanf("%f", &a);
	
	printf("Enter the second number:");
	scanf("%f", &b);
	
	printf("Enter the third number:");
	scanf("%f", &c);
	
	printf("Enter the fourth number:");
	scanf("%f", &d);
	
	printf("Sum is %f\n", a+b+c+d);
	printf("Subtract is %f\n", a-b-c-d);
	printf("Subtract is %f\n", a/b/c/d);
	printf("Subtract is %f\n", a*b*c*d);
	return 0;
}
