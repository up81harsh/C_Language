//30-03-23 13:24
#include<stdio.h>
void reference(int[],int);
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
printf("\n Elements by reference:");
reference(arr,n);//Passing array by call by reference
for(i=0;i<n;i++)
{
printf("\n%d ",arr[i]);
}
return 0;
}
void reference(int x[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d ",x[i]++);
}
}
