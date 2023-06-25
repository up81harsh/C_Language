#include <stdio.h>
int main()
{
	int a,num=0;
	printf("Enter  the Number:");
	scanf("%d", &a);
	while (num <= a)
	{
		printf("Value is:%d\n", num+1);
		num=num+1;
	}
	return 0;
}
