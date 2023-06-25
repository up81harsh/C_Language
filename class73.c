#include <stdio.h>
void areaoftriangle(float *x,float *y,float *z);
int main(){
	float b,c,d;
	scanf("%f %f",&b,&c);
	d=0.5*b*c;
	printf("Area is %.2f",d);
}
void areaoftriangle(float *x,float *y,float *z){
	*z=0.5*(*x)*(*y);
	
}
