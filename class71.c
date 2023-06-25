#include <stdio.h>
int main(){
	int x=10;
	char ch='A';
	void *gp;
	gp=&x;
	printf("Generic pointer pointss to the integer value=%d", *(int*)gp);
	gp=&ch;
	printf("\nGenric pointer now points to character %c",*(char*)gp);
	return 0;
}
