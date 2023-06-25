#include <stdio.h>
int main()
{
    
	int n,i,j,rows;
    printf("Enter\n0 for Triangular pattern\n1 for the Reversed Triangular pattern\n2 for Exit:\n");
    scanf("%d",&n);
    while(1)
	switch (n)
    {
    case 0:       
        printf("Enter number of rows");
        scanf("%d",&rows);
        for ( i = 1; i <= rows; ++i)
        {
            for ( j = 1; j <= i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        
        break;
    case 1:
        printf("Enter number of rows");
        scanf("%d",&rows);
        for (i = rows; i >= 1; --i)
        {
            for ( j = 1; j <=i ; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    case 2:
    	printf("Thank You For Using the Program");
    	goto end;
	  
    
    default:
        break;

    }
    end:
    return 0;
}
