// BUBBLE SORTING
#include<stdio.h>
int main()
{
    int  arr[100],i,j,n,number,temp;

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

    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("\n","SORTED ARRAY","\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}