#include<stdio.h>
int binarysearch(int arr[] ,int n,int element)
{   
    int l=0;
    int r=n-1;
    while(l<=r)
    {
    int mid=(l+r)/2;
     for(int i=0;i<n;i++)
      {
        if(arr[mid]==element)
        return mid;

        if(arr[mid]<element)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
      }    
    }
    return -1;
}

int main()
{
    int arr[100],i,n,element,mid;

printf("Enter the number of elements to be inserted:\n");
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
printf("\nEnter the element to be searched:");
scanf("%d",&element);
// l=0;
// r=n-1;
// while(l<=r)
// {
//     mid=(l+r)/2;
//     if(element==arr[mid])
//     {
//         return mid;
//     }   
//     else if(element>arr[mid])
//     {
//         l=mid+1;
//     }
//     else
//     {
//         r=mid-1;     
//     }
// }
int searchindex=binarysearch(arr,n,element);
printf("Position of element is:%d",searchindex);
return 0;
}