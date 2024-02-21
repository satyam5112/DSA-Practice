// Program to print the sum of all n elements present in an array.
#include<stdio.h>
int main()
{
int arr[100],i,n,sum;

printf("Enter the number of elements to be isnserted:");
scanf("%d",&n);

printf("Enter the elements of array:\n");
for(i=0;i<n;i++)
{
    printf("Element %d: ",i+1);
    scanf("%d",&arr[i]);
}
sum=0;
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
printf("\nThe sum of all %d elements of given array is:%d",n,sum);
return 0;
}