#include <stdio.h>
int main(){
	int n1=0,n2=1,n3,i=2,j;
	printf("Enter the Number of Fibnocci Series You Want:");
	scanf("%d", &j);
	printf("\n---------Fibnocci Series is---------\n\n");
	printf("%d %d ", n1,n2);
	for(i;i<=j;i++){
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d ",n3);
	}
}
