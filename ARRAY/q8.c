//Write a program to find average of elements pointed on even index in an array.
#include<stdio.h>
int main()
{
    int i,n,count;
    float average,arr[100],sum=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d ",i);
        scanf("%f",&arr[i]);
    }
    for(i=2;i<n;i++)
    {
        if(i%2==0)
        {
            count++;
            sum=sum+arr[i];
        }
    }   
    printf("\nThe total sum is:%f",sum);
    average=sum/count;
    printf("\nAverage of numbers at even index is:%f",average);
    return 0;
}