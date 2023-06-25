//LINEAR SEARCH
#include <stdio.h>
int main()
{
	int a[50];
	int i,loc=-1,key,n;
	printf("Enter value of n:");
	scanf("%d", &n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("Enter Integer Value to search in array: ");
	scanf("%d", &key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			loc=i;
			break;
		}
	}
	if(loc!=-1){
		printf("Elements Found at %d", loc+1);
		
	}
	else
	{
		printf("Element not found");
	}
}
