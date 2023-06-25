//04.02.23
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the Valid Age of DOB for DRIVING LICENSE:");
	scanf("%d", &a);
	printf("SWITCH COMMAND USED\a\n");
	
	switch(a)
	{
	
	case 29:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 28:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 27:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 26:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 25:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 24:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 23:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 22:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 31:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 21:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 20:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 19:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 18:
		printf("You are VALID to apply PERMANENT DRIVING LICENSE.\n ");
		break;
	case 17:
		printf("You are VALID to apply LEARNERS DRIVING LICENSE.\n");
		break;
	case 16:
		printf("You are VALID to apply LEARNERS DRIVING LICENSE.\n");
		break;
	case 15:
		printf("You are VALID to apply LEARNERS DRIVING LICENSE.\n");
		break;
	case 14:
		printf("You are not VALID to apply for DRIVING LICENSE.\n");
		break;
	case 13:
		printf("You are not VALID to apply for DRIVING LICENSE.\n");
		break;
	case 12:
		printf("You are not VALID to apply for DRIVING LICENSE.\n");
		break;
	case 9:
		printf("You are not VALID to apply for DRIVING LICENSE.\n");
		break;
	case 11:
		printf("You are not VALID to apply for DRIVING LICENSE.\n");
		break;
	case 10:
		printf("You are not VALID to apply for DRIVING LICENSE.\n");
		break;
	default:
		printf("Not a VALID OPTION choosen.\n");
		break;
	}
	printf("\n");
	printf("NEW CASE\n");
	printf("Enter the value:");
	scanf("%d", &a);
	
	printf("Enter the another value:");
	scanf("%d", &b);
	printf("\n");
	printf("IF/ELSE CONDITION\n");
	if(a==b)
	{
		printf("Both Values are equal (^_^)\n");
	}
	else if(a>=b)
	{
		printf("Value of a is greater then b (^_^)\n");
	}
	else
	{
		printf("Value of a is less then b (^_^)\n");
	}
	printf("\n");
	printf("Table you want to print:");
	scanf("%d", &c);
	printf("%d x 1 = %d\n", c, c*1);
	printf("%d x 2 = %d\n", c, c*2);
	printf("%d x 3 = %d\n", c, c*3);
	printf("%d x 4 = %d\n", c, c*4);
	printf("%d x 5 = %d\n", c, c*5);
	printf("%d x 6 = %d\n", c, c*6);
	printf("%d x 7 = %d\n", c, c*7);
	printf("%d x 8 = %d\n", c, c*8);
	printf("%d x 9 = %d\n", c, c*9);
	printf("%d x 10 = %d\n", c, c*10);
	printf("YOUR TABLE IS PRINTED (^_^)\n");
	printf("\n");
	printf("ARITHMETIC OPERATION:\n");
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d x %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("\n");
	printf("YOUR ALL PROGRAMS ARE SUCCESSFULLY PRINTED (^_^)\n");
	return 0;
}
