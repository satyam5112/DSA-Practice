// *
// ** 
// ***
// ****
// *****
#include<stdio.h>
int main()
{
    int i,j,n;      //n=5
    printf("Enter the number of line:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

