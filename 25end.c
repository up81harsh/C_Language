//08.02.23
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Value a:");
	scanf("%d", &a);
	printf("Enter the value b:");
	scanf("%d", &b);
	for(a;a<10;a++)
	{
		printf("a= %d\n", a);
		for(b;b<10;b++)
		{
			printf("b= %d\nEnter the Value: (0 for Exit!!!):", b);
			scanf("%d", &c);
			if(c==0)
			{
				goto end;	
			}
			
		}
		
	}
	end:
	return 0;
}
