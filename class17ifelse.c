//04.02.23
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the Marks:");
	scanf("%d", &a);
	
	if(a>90)
	{
		printf("Grade A\n ", a);
	}
	else if(a>80)
	{
		printf("Grade B\n", a);
	}
	else if(a>70)
	{
		printf("Grade C\n", a);
	}
	else if (a>60)
	{
		printf("Grade D\n", a);
	}
	else{
		printf("You are fail\n");
	}
	return 0;
}
