//09.02.23 Without arguments and without return value
#include <stdio.h>
int sum(int a, int b);
int main(){
	int a,b;
	printf("Enter the value:");
	scanf("%d", &a);
	printf("Enter th another value:");
	scanf("%d", &b);
	int c;
	c=a+b;
	printf("%d + %d = %d", a, b, c);
	return 0;
}
int sum(int a, int b){
	return a + b;
}

