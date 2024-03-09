//Find first two maximum number in an array.
#include<stdio.h>
int SecondLargest(int arr[], int size)
{
    int largest = arr[0];
    int secondLargest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest) 
        {
        secondLargest = largest;
        largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
        secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int arr[100],n,i,max;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    { printf("Element %d :",i+1);
      scanf("%d",&arr[i]);
    } 
     //max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {max=arr[i];}   
    }
    printf("\nThe first largest element in the array is:%d",max);
    int secondLargest = SecondLargest(arr, n);
    printf("\nThe second largest element in the array is: %d\n", secondLargest);
    return 0;
}