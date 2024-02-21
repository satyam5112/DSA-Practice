 // C program to copy all the elements of one array to another 
#include <stdio.h> 
int main() 
{ 
    int array1[100],array2[100],i,n;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements of array1:\n");
    printf("ARRAY1\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("\nARRAY2 is:\n");
    for(i=0;i<n;i++)
   {
    printf("%d ",array2[i]);
   }    
    	return 0 ;
}