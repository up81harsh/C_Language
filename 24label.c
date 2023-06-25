//08.02.23
#include <stdio.h>
int main()
{
	start:
	label:
		printf("Code start ");
	printf("Hello Harsh\n");
		goto start;
	goto label;
	
		printf("Code End");
	return 0;
}
