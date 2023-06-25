//07.02.23 Struck command
#include <stdio.h>
int main()
{
    char title[20];
    char author[100];
    float price;
    int pages;
	printf("Enter the Title:");
    scanf("%s", &title);
    printf("\n");
    printf("Enter the Author Name:");
    scanf("%s", &author);
    printf("\n");
    printf("Enter the Price:");
    scanf("%f", &price);
    printf("\n");
    printf("Enter the Pages:");
    scanf("%d", &pages);
	printf("\n");
	printf("LIBRARY SEARCH\n");
    printf("%s\n", title);
    printf("%s\n", author);
    printf("%f\n", price);
    printf("%d\n", pages);
    printf("(^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^) (^_^)\n");
    return 0;
}

