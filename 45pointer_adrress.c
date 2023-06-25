#include <stdio.h>
int main()
{
	char a='3';
	char* ptra = &a;
	printf("---Address of Pointer-In-char---\n\n");
	printf("Address of char a %d\n",ptra);
	ptra--;
	printf("Address of char a after removal 1 byte %d\n",ptra);
	printf("Address of char a after removal 2 byte %d\n", ptra-2);
	int b=3;
	int* ptra2 =&b;
	printf("\n\n---Address of Pointer-In-int---\n\n");
	printf("Address of int a %d\n",ptra2);
	ptra2--;
	printf("Address of int a after removal 1 byte %d\n",ptra2);
	printf("Address of int a after removal 2 byte %d\n",ptra2-2);
	
	return 0;
}
