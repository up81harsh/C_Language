//25-02-23 23:04 ADDRESS INCREASE 4BITS
#include <stdio.h>
int main()
{
	int x[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	int y;
	printf("Enter the Number to Increase Address:"
	scanf("%d", &y);
	printf("Value of 1 element is %d\n", x[0]);
	printf("\n");
	printf("Address of 1 element is %d\n\n", &x[0]);
	printf("Address of 2 element is %d\n\n", &x[1]);
	printf("Address of 3 element is %d\n\n", &x[2]);
	printf("Address of 4 element is %d\n\n", &x[3]);
	printf("Address of 5 element is %d\n\n", &x[4]);
	printf("Address of 6 element is %d\n\n", &x[5]);
	printf("Address of 7 element is %d\n\n", &x[6]);
	printf("Address of 8 element is %d\n\n", &x[7]);
	printf("Address of 9 element is %d\n\n", &x[8]);
	printf("Address of 10 element is %d\n\n", &x[9]);
	printf("Address of 11 element is %d\n\n", &x[10]);
	printf("Address of 12 element is %d\n\n", &x[11]);
	printf("Address of 13 element is %d\n\n", &x[12]);
	printf("REadded\n");
	printf("DEaddress %d\n", *(x+1));
	printf("%d", (x+y));
	return 0;
}

