//16.02.23       FIBONACCI SERIES VIA ITERATIVE
#include <stdio.h>
int main()
{
	int n1=0,n2=1,n3,i=2,j;
	printf("Enter the Number of Fibonacci Series Elements:");
	scanf("%d", &j);
	printf("\n---------Fibonacci Series---------\n");
	printf("\n%d %d", n1, n2);
	for(i;i<j;i++)
	{
	n3=n1+n2;
	
	printf(" %d", n3);
	n1 =n2;
	n2 =n3;
	}
	return 0;
}
