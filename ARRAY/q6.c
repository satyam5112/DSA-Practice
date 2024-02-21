//  find first two maximum number in an array.
// #include<stdio.h>

// int findSecondLargest(int arr[], int size)
// {
//     int largest = arr[0];
//     int secondLargest = arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > largest) 
//         {
//         secondLargest = largest;
//         largest = arr[i];
//         } 
//         else if (arr[i] > secondLargest && arr[i] != largest) 
//         {
//         secondLargest = arr[i];
//         }
//     }
//     return secondLargest;
// }

// int main()
// {
//    int arr[100],n,i,max;
//    printf("Enter the number of elements:\n");
//     scanf("%d",&n);

//     printf("Enter the elements of array:\n");
//     for(i=0;i<n;i++)
//     {
//     scanf("%d",&arr[i]);
//     }
//     printf("ARRAY\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     for(i=1;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }   
//     }
//     printf("\nThe first largest element in the array is:%d",max);


//     int size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++)
//     {
//     scanf("%d", &arr[i]);
//     }

//     int secondLargest = findSecondLargest(arr, size);

//     printf("The second largest element in the array is: %d\n", secondLargest);

//     return 0;

// }