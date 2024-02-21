//LINEAR SEARCH 

#include<stdio.h>
int main()
{
    int arr[100],position=-1,i,n,number;

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
    
    printf("\nEnter the number to be searched:");
    scanf("%d",&number);
    for(i=0;i<n;i++)
    {
    if(arr[i]==number)
        position=i;
    }
    if(position!=-1)
        printf("The given element is at %d",(position+1));
    else{
        printf("Element not found.");   
    }
        return 0;
}
