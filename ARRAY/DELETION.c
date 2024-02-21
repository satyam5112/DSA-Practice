#include<stdio.h>
int main()
{
    int arr[100],n,element,position,i;

    printf("Enter the number of elements to be inserted:\n");
    scanf("%d,",&n);

    printf("Enter the elements of array:\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     printf("ARRAY:");
     for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }

   //printf("\nEnter the number which is to be deleted:");
   //scanf("%d",&element);

    printf("\nEnter the position at which element is to be deleted:");
    scanf("%d",&position);

    i=position+1;
    while(i<=n-1)
    {
        arr[i-1]=arr[i];
        i++;
    }
    n--;
    printf("NEW ARRAY\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}