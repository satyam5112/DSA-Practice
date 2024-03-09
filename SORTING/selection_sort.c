// Selection Sort
#include<stdio.h>
int main()
{
    int arr[100],i,j,n,min;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("\nEnter the elements of array:-");
    for(i=0;i<n;i++)
    {
        printf("\nElement %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // Sortng
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("Sorted Array:-\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: %d\n",i+1,arr[i]);
    }
    return 0;
}