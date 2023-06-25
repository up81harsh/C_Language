#include <stdio.h>
int main(){
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ARRAYS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
	int a[100],i,n,sum=0,min,max;
	printf("Enter the Array Size:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter the Value:");
		scanf("%d", &a[i]);
		min=a[0];
		max=a[0];
	}
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Value of Array is:\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			
		}
		else if(a[i]>max){
			max=a[i];
		}
		
		printf("Value of Array is %d\n", a[i]);
		sum=sum+a[i];
	}
	printf("\n%d is Min\n", min);
	printf("%d is Max\n\n", max);
	printf("\nSum of Arrray Elements is: %d\n", sum);
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
}
