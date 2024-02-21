// find first  maximum number in an array.
#include<stdio.h>
int main()
{
    int arr[100],n,i,max;
   printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }   
    }
    printf("\nMaximum Number is:%d",max);
    return 0;
}