//Write a program to count duplicate elements present in an array.
#include<stdio.h>
int main()
{
    int arr[100],i,j,n,count=0;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    printf("ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements in given array is:%d",count);

    return 0;
}
