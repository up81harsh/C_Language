#include <stdio.h>
int main()
{
	int a;
	printf("Enter the Table Printed to: ");
	scanf("%d", &a);
	int b=1,c=1;
	for(c;c<=a;c++)
	{	
		printf("\nTable of %d\n\n", c);
		for(b=1;b<=10;b++){
			
			printf("%d X %d = %d\n",c,b,c*b);
		}
		printf("\n____________________________________________________________________________________________________________\n\n");
	}
	return 0;
}
