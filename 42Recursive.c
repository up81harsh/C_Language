#include <stdio.h>
void printFibnocci(int n){
	static int n1=0,n2=1,n3;
	if(n>0){
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d ", n3);
	printFibnocci(n-1);
	}
}
int main(){
	int n;
	printf("Enter the Fibnocci Series Value you Want : ");
	scanf("%d", &n);
	printf("%d %d ",0,1);
	printFibnocci(n-1);
}
