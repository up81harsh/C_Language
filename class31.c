#include <stdio.h>
void main()
{
	int x;
	printf("ENter the NUmber: ");
	scanf("%d", &x);
	if (x%2==0)
			goto even;
	else
			goto odd;
	even:
		printf("%d is even", x);
		return;
	odd:
		printf("%d is odd", x);
		
}
