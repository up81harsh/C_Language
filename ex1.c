#include <stdio.h>
// file handeler
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "w");
    char str[128] = "Hello World!";
    fprintf(ptr, "%s", str);
    printf("FILE SAVED!!!!!");
}
