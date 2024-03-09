// A program for printing an aeeay elements in reverse order by swapping method.
#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<=(n-(i+1));i++)
    {   
        temp=0;
        temp=arr[i];
        arr[i]=arr[n-(i+1)];
        arr[n-(i+1)]=temp;
    }
    printf("ARRAY IN REVERSE ORDER\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}