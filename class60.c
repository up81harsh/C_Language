#include<stdio.h>
void value(int);
int main()
{
int arr[100],n;
int i;
printf("\n Enter n:");
scanf("%d",&n);
printf("\n Enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Passing elements by value:");
for(i=0;i<n;i++)
{
value(arr[i]);//Passing array value by Call by value
}

for(i=0;i<n;i++)
{
printf("%d",arr[i]);//Passing array value by Call by value
}
return 0;
}
void value(int u)
{
printf("%d ",++u);
}

