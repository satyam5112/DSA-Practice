// Write a program to find largest difference between two array.
#include<stdio.h>
int MAX,MIN,Difference;
int main()
{
    int arr1[100],n,i,max1,min1;
   printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements of array_1:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr1[i]);
    }
    printf("ARRAY_1\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    max1=arr1[0];
    for(i=1;i<n;i++)
    {
        if(arr1[i]>max1)
        {
            max1=arr1[i];
        }   
    }
    printf("\nMaximum Number is:%d",max1);
    // find smallest element.
    min1=arr1[0];
    for(i=1;i<n;i++)
    {
    if(arr1[i]<min1)
        {
            min1=arr1[i];
        }
    }
    printf("\nMinimun element is:%d",min1);


    // for 2nd array

    int arr2[100],n2,i2,max2,min2;

   printf("\nEnter the number of elements:\n");
    scanf("%d",&n2);
    printf("Enter the elements of array_2:\n");
    for(i2=0;i2<n2;i2++)
    {
    scanf("%d",&arr2[i2]);
    }
    printf("ARRAY_2\n");
    for(i2=0;i2<n2;i2++)
    {
        printf("%d ",arr2[i2]);
    }
    // for max 2.
    max2=arr2[0];
    for(i2=1;i2<n2;i2++)
    {
        if(arr2[i2]>max2)
        {
            max2=arr2[i2];
        }   
    }
    printf("\nMaximum Number is:%d\n",max2);

    // find smallest2 element.
    min2=arr2[0];
    for(i2=1;i2<n2;i2++)
    {
    if(arr2[i2]<min2)
        {
            min2=arr2[i2];
        }
    }
    printf("Minimum element is:%d\n",min2);
    // Maximum from both array.
    if(max1>max2)
    {MAX=max1;
    }
    else
    {MAX=max2;
    }
    // Minimum from both array.
    if(min1>min2)
    {
        MIN=min2;
    }
    else
    {
        MIN=min1;
    }
    Difference=MAX-MIN;
    printf("Largest difference from 2 given arrays are:%d",Difference);

    return 0;
}