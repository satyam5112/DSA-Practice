// Write a program to find largest difference between two array.
#include<stdio.h>
int main()
{
    int arr1[100],n,i,max,min,difference;
   printf("Enter the number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d ",i+1);
        scanf("%d",&arr1[i]);
    }
    max=arr1[0];
    for(i=1;i<n;i++)
    {
        if(arr1[i]>max)
        {
            max=arr1[i];
        }   
    }
    printf("\nMaximum Number is:%d",max);
    // find smallest element.
    min=arr1[0];
    for(i=1;i<n;i++)
    {
        if(arr1[i]<min)
        {
            min=arr1[i];
        }
    }
    printf("\nMinimun element is:%d",min);
    difference=max-min;
    printf("Largest difference from 2 given arrays are:%d",difference);
    return 0;
}