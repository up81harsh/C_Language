//04.02.23
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the Marks of Maths:");
	scanf("%d", &a);
	
	printf("Enter the Marks of Science:");
	scanf("%d", &b);
	printf("\n");
	if(a>=b&&b>40)
	{
		printf("You are passed in BOTH subjects.\nYour AWARDED GIFT is 45. ");
	}
	else if(a>b&&b<=40)
	{
		printf("You are passed in MATHS subjects.\nYour AWARDED GIFT is 15. ");
	}
	else if(b>a&&a<=40)
	{
		printf("You are passed in SCIENCE subjects.\nYour AWARDED GIFT is 15. ");
	}
	else
	{
		printf("You are fail in BOTH subjects.\nYour AWARDED GIFT is 0. ");
	}
	return 0;
}
