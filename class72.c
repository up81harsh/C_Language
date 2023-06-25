#include <stdio.h>
void sum(int *a,int *b,int *c);
int main(){
	int x,y,z=0;
	scanf("%d %d", &x,&y);
	sum(&x,&y,&z);
	printf("%d",z);
}
void sum(int *a,int *b,int *c){
	*c=*a+*b;
}
