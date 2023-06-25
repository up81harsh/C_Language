#include <stdio.h>
int square(int y);

int main()
{
	int x=1;
	for(x;x<=10;++x){
		printf("%d ", square(x));
	puts(" "),
	}
}

int square (int y){
	return y * y;
}
