#include <stdio.h>

int main() {
    int r, i, j, s, n;
    printf("Enter the ROWS You want:");
    scanf("%d", &r);

        for(i = 1; i <= r; i++) 
		{
           n = 1;
           s = r - i;
           for(j = 1; j <= s; j++) 
		   {
            printf(" ");
           }
        for(j = 1; j <= i; j++) 
		{
            printf("%d", n);
            n++;
        }
        n -= 2;
        for(j = 1; j < i; j++) 
		{
            printf("%d", n);
            n--;
        }
        printf("\n");
    }

    return 0;
}

