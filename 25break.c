//08.02.23
#include <stdio.h>
int main()
{
//	printf("Hello Harsh");
	int i=0;
	for(i; i<8; i++)
	{
		printf("%d\n", i);
		int a;
		int j = 0;
		for (j; j<8; j++)
		{
			printf("%d\n Enter the number 0 for exit:", j);
			scanf("%d", &a);
			if(a==0)
			{
				break;
			}
		 } 
	}
	return 0;
}
