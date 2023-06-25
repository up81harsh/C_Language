#include <stdio.h>
int main()
{
	int marks;
	char name[30];
	printf("Enter the Name:");
	scanf("%s", name);
	
	printf("Enter the Marks:");
	scanf("%d", &marks);
	
	printf("Hello %s! You scored %d Marks!!! \n", name, marks);
	return 0;
}
