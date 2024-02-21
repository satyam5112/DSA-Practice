//Write a program to find average of elements pointed on even index in an array.
#include<stdio.h>
int main()
{
    int i,n;
    float average,arr[100],sum=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%f",&arr[i]);
    }
    printf("ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%f ",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
        sum=sum+arr[i];
        }
    }   
    printf("\nThe total sum is:%f",sum);
    average=sum/(n-2);
    printf("\nAverage of numbers at even index is:%f",average);
    return 0;
}