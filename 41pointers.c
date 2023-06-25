#include <stdio.h>
 
int main()
{
    printf("__________________________POINTERS_____________________\n");
	int a;
	printf("Enter the Value = ");
	scanf("%d", &a);
    printf("%d\n", a);
    printf("Address of variable %d is %d", a, &a);
    return 0;
}
