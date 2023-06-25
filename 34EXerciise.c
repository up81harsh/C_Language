 #include <stdio.h>
/*kilometer to miles
inches to foot
cms to inches
pound to kg
inches to meters*/
int main()
{
	
	int a;
	float kms,miles,cms,inches,pound,kg,meters,foot;
	char ch;
	printf("Enter 'Y' for UNIT CONVERSIONS:\n");
	printf("Enter 'N' for NOT want UNIT conversion:\n");
	scanf("%s", &ch);
	while (1)
	{
		switch (ch)
		{
		case 'Y':
			printf("\nLets,Perform some UNIT CONVERIONS:\n");
			printf("Enter 1 to KILOMETER to MILES:\n");
			printf("Enter 2 to INCHES to FOOTS:\n");
			printf("Enter 3 to CENTI-METER to INCHES:\n");
			printf("Enter 4 to POUND to KILO-GRAM:\n");
			printf("Enter 5 to INCHES to METER:\n");
			printf("Enter 0 to QUIT:\n");
			scanf("%d", &a);
			
			
			switch (a)
			{
			case 1:
				printf("\nKILOMETER to MILES\n");
				printf("Enter KILOMETER=");
				scanf("%f", &kms);\
				miles=kms*0.621371;
				printf("%.0f KM = %.2f MILES\n", kms, miles);
				printf("___________________________________________________________________________________________\n");
				break;
			case 2:
				printf("\nINCHES to FOOTS\n");
				printf("Enter INCHES=");
				scanf("%f", &inches);
				foot=inches*0.0833333;
				printf("%.0f INCHES = %.2f FOOT\n", inches, foot);
				printf("___________________________________________________________________________________________\n");
				break;
			case 3:
				printf("\nCENTI-METER to INCHES\n");
				printf("Enter CENTI-METER=");
				scanf("%f", &cms);
				inches=cms*0.393701;
				printf("%.0f CENTI-METER = %.2f INCHES\n", cms, inches);
				printf("___________________________________________________________________________________________\n");
				break;
			case 4:
				printf("\nPOUND to KILO-GRAM\n");
				printf("Enter POUND=");
				scanf("%f", &pound);
				kg=pound*0.453592;
				printf("%.0f POUND = %.2f KG\n", pound, kg);
				printf("___________________________________________________________________________________________\n");
				break;
			case 5:
				printf("\nINCHES to METER\n");
				printf("Enter INCHES=");
				scanf("%f", &inches);
				meters=inches*39.3701;
				printf("%.0f INCHES = %.2f METER\n", inches, meters);
				printf("___________________________________________________________________________________________\n");
				break;
			case 0:
				printf("-----Quitting The Progarm-----\n");
				goto end;
			default:
				printf("!!!Wrong Choice!!!\n");
				goto end;
		
			}
			break;
		
		
	
		case 'N':
			printf("You decide not to convert UNITS.\n");
			printf("Thanks for using our Program.\nHave a Nice Day!!! (^_^)\n");
			printf("___________________________________________________________________________________________\n");
			goto end;
		default:
			printf("You Entered a Wrong Character!!!\n");
			goto end;
		}
	}
	end:
	
	return 0;
}
