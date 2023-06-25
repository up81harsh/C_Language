#include <stdio.h>
int main()
{
	int rgno[4][8]={{99,84,70,57,19,99,9,87},{01,02,03,04,05,06,07,8},{99,87,86,84,89,92,20,31},{87,88,76,75,74,56,76,47}};
	int i;
	for(i=0;i<4;i++){
		int j;
		for(j=0;j<8;j++){
			printf("The Elements of Matrices %d X %d is %d\n",i,j,rgno[i][j]);
//			printf("%d ", rgno[i][j]);
		}
//		printf("\n");
	}
	return 0;
}
