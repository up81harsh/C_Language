//04-03-23 22:54 Call By Refrence
#include <stdio.h>
void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}
int main(){
	int a,b;
	printf("a=");
	scanf("%d" ,&a);
	printf("b=");
	scanf("%d" ,&b);
	printf("a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("Value Will Be Swapped!!!!\n");
	printf("a=%d and b=%d\n", a,b);
	return 0;
}
