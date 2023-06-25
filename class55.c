#include <stdio.h>
int main(){
	int a[3][3],i,j,sum;
	for(i=0;i<3;i++){
//		rows
		for(j=0;j<3;j++){
			//		coloums
		printf("Enter the Value of a[%d][%d]:",i,j);
		scanf("%d", &a[i][j]);
		sum=sum+a[i][j];
		}
	}
	printf("Values\n");
	for(i=0;i<3;i++){

		for(j=0;j<3;j++){
		printf("%d\n", a[i][j]);
		}
		
	}
	printf("sum is %d\n",sum);
}
