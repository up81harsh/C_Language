#include <stdio.h>
void printstar(int n){
	int i;
	printf("Enter the nummber of stars You Want ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		printf("%c\n",'*');
}

int main(){
	int n;
	printstar(n);
	return 0;
}

