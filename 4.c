#include<stdio.h>
int main()
{
	int radius;
	printf("Enter the Radius:");
	scanf("%f", &radius);
	float pi=3.14;
	float cir=2*pi*radius;
	printf("Circumference of Circle: %f\n",cir);
	
	return 0;
}
