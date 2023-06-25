#include <stdio.h>
int main()
{
	int a;
	printf("enter a:");
	scanf("%d", &a);
	int d=a++;
//	int c=++a;
	printf("%d %d", a, d);
	return 0;
}
