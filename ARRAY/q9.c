// Print array element in reverse order using swapping method.
#include<stdio.h>
int main()
{
    int arr[100],i,n;

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
    printf("\n");
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}