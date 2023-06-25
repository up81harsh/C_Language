#include <stdio.h>
int main(){
	int a[10][10],i,j,sum,m,n;
	printf("Enter the no. of rows and column:");
	scanf("%d %d",&m,&n);
	printf("Enter the Elements:");
	
	for(i=0;i<m;i++){
//		rows
		for(j=0;j<n;j++){
			//		coloums
		printf("Enter the Value of a[%d][%d]:",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	printf("Values\n");
	for(i=0;i<n;i++){
		if(i==j){
			sum=sum+a[i][j];
		}
	}
	printf("sum of diagnol is %d\n",sum);
}
