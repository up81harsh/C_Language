#include <stdio.h>
int main(){
	int no,n,sum=0;
	printf("Enter the number : ");
	scanf("%d", &no);
	while(no!=0){
		n=no%10;
		sum=sum+n;
		no=no/10;
	}
	printf("The sum = %d", sum);
	return 0;
}
