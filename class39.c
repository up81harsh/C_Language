#include <stdio.h>
int swap(int x, int y);
int main(){
	int a=5;
	int b=6;
	printf("a=%d, b=%d", a,  b);
	swap(a,b);
	return 0;
}
int swap(int x,int y)
{
	int tem=x;
	x=y;
	y=tem;
	printf("\nx=%d, y=%d", x,  y);
	
	
}
