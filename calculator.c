int main()
{
	
	int a;
	float n1,n2,result;
	char ch;
	printf("Enter 'Y' for using Calculator:\n");
	printf("Enter 'N' for NOT want Calculator:\n");
	scanf("%s", &ch);
	while (1)
	{
		switch (ch)
		{
		case 'Y':
			printf("\nLets,Perform some UNIT CONVERIONS:\n");
			printf("Enter 1 to Addition:\n");
			printf("Enter 2 to Subtract:\n");
			printf("Enter 3 to Multiplication:\n");
			printf("Enter 4 to Divison:\n");
			
			printf("Enter 0 to QUIT:\n");
			scanf("%d", &a);
			
			
			switch (a)
			{
			case 1:
				printf("\nAddition\n");
				printf("Enter Value = ");
				scanf("%f", &n1);
				printf("Enter Value = ");
				scanf("%f", &n2);
				
				printf("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
				printf("___________________________________________________________________________________________\n");
				break;
			case 2:
				printf("\nSubtraction\n");
				printf("Enter Value = ");
				scanf("%f", &n1);
				printf("Enter Value = ");
				scanf("%f", &n2);
				
				printf("%.2f - %f = %.2f", n1, n2, n1-n2);
				printf("___________________________________________________________________________________________\n");
				break;
			case 3:
				printf("\nMultiplication\n");
				printf("Enter Value = ");
				scanf("%f", &n1);
				printf("Enter Value = ");
				scanf("%f", &n2);
				
				printf("%f X %f = %f", n1, n2, n1*n2);
				printf("___________________________________________________________________________________________\n");
				break;
			case 4:
				printf("\nDivision\n");
				printf("Enter Value = ");
				scanf("%f", &n1);
				printf("Enter Value = ");
				scanf("%f", &n2);
				
				printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
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
			printf("You decide not to use Calculator.\n");
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
