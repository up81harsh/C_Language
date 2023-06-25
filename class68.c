#include <stdio.h>

int main() {
char filename[100];
printf("Enter the filename: ");
scanf("%s", filename);

FILE *fp;
fp = fopen(filename, "r");

if(fp == NULL) {
printf("Error opening the file.");
return 1;
}

int num;
char str[100];
double dbl;
while(fscanf(fp,"%d %s %lf", &num, str, &dbl)!='\n') {
printf("%d %s %lf", num, str, dbl);
//printf("%d %s %lf", num, str, dbl);
//printf("%d %s %lf", num, str, dbl);

}
fclose(fp);
return 0;
}
