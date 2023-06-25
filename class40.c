#include <stdio.h>
int swap(int *a, int *b);
int main()
{
	int x=5,y=7;
	printf("%d %d\n", x, y);
	swap(&x,&y);
	printf("%d %d\n", x, y);
}
int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d\n", *a, *b);
	return 0;
}
