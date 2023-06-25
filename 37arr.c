#include <stdio.h>
int main(){
	int a[2][5]={{1,10,23,56,54},{6,98,87,85,25,57}};
	int i=0;
	
	for(i=0;i<2;i++){
		
		int j=0;
		for(j ;j<5;j++){
			printf("Element of Matrices  %d,%d is %d\n\n", i, j, a[i][j]);
		}	
	}
	
	return 0;
}
