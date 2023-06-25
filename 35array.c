#include <stdio.h>
int main()
{
	int marks[5];
	int i=0;
	for( i; i<5; i++){
		printf("\nEnter the value of %d element of the ARRAY:", i);
		scanf("%d", &marks[i]);
		
	}
	for( i=0; i<5; i++)
	{
		printf("\nThe value of %d element of the ARRAY is %d\n___________________________________________________________________________________________\n", i, marks[i]);
		
	}

	return 0;
}
