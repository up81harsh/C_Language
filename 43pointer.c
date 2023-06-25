//18-02-23 21:53
#include <stdio.h>
int main()
{
	int a;
	printf("Enter The Value:");
	scanf("%d", &a);
	printf("%d\n", a);
	int *ptra2=NULL;
	int *ptra=&a;  /*address dega*/
	printf("Address of Pointer is %x \n", &ptra);
	printf("Address int a is  %p\n", &a);
	printf("Address is %p\n", ptra);
	printf("Address is %d\n", *ptra);
	printf("Address is %d\n", a);
	printf("Address of NULL ptr2 is %p\n", ptra2);
	return 0;
} 
