// Program to print elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int arr[100],i,n;

    printf("Enter the number of elements to be entered:\n");
    scanf("%d",&n);
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(i=(n-1);i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
