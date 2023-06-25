 //05.02.23 do-while loop
#include <stdio.h>
int main()
{
	int num, index=1;
	printf("Enter the Number:");
	scanf("%d", &num);
	do
	{
		printf("%d\n", index*2);
		index = index*2;	
	}while(index<num);
	return 0;
}
