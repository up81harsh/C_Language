#include <stdio.h>
int main()
{
	int marks[2][4] = {{41,21,25,42},{32,54,66,45}};
	int i=0;
	for( i; i<2; i++)
	{
		int j=0;
		for(j;j<4;j++){
			printf("\nThe value of %d,%d element of the ARRAY is %d\n", i, j, marks[i][j]);
//			printf("%d ",marks[i][j]);	
		}
//		printf("\n");
	}
	return 0;
}
