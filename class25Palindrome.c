#include<stdio.h>  
int main()    
{    
	int n,r,sum=0,y;    
	printf("Enter the Value =");    
	scanf("%d",&n);    
	y=n;    
	while(n>0)    
	{    
		r=n%10;    
		sum=(sum*10)+r;    
		n=n/10;    
	}    
	if(y==sum)    
		printf("Palindrome number ");    
	else    
		printf("Not palindrome\n");   
return 0;  
}   
