#include <stdio.h>
int square(int y);

int main()
{
	int v;
	printf("Enter the Square Numbers you want: ");
	scanf("%d", &v);
	int x=1;
	for(x;x<=v;++x){
		printf("%d ", square(x));
	puts(" ");
	}
}

int square (int y){
	return y * y;
}
