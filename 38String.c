//15.02.23 STRING FUNCTIONS
#include <stdio.h>
#include <string.h>
int main()
{
	printf("____________STRING_FUNCTIONS__________\n\n\n");
	char s[100], t[100];
	printf("Enter the first Word: ");
	scanf("%s", &s);
	printf("Enter the second Word: ");
	scanf("%s", &t);
//	JOINS THE TWO WORDS 'CONCATENATE'
	strcat(s, t);
	printf("\nCONCATENATE = %s\n", s);
	printf("\n");
//	COUNT THE NUMBER
	int l=strlen(s);
	printf("Length of Charaters = %d\n", l);
	printf("\n");
//	COPY THE CONTENTS
	strcpy(t, s);
	printf("%s\n", s);
	printf("%s\n", t);
//	COMPARISON TWO STRINGS
	char x[]="Hello";
	char y[]="Harsh";
	int cmp=strcmp(x, y);
	printf("\nComparison Result = %d\n", cmp);
//	REVERSE THE STRING
	printf("\nReverse String %s ", strrev(s));
	return 0;
}
