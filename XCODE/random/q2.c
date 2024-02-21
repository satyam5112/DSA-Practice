#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,A[3][3],T[3][3];
    
    printf("Enter a 3 x 3 matrix:\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("The entered matrix is: \n");
    for(i=1;i<=3;i++)
    {
        printf("\n");
        for(j=1;j<=3;j++)
        {
            printf("%d\t",A[i][j]);
        }
    }

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        
            T[i][j]=A[j][i];    
    }
    printf("\n\n The Transpose of the matrix is: \n");
    for(i=1;i<=3;i++)
    {
        printf("\n");
        for(j=1;j<=3;j++)
        {
            printf("%d\t",T[i][j]);
        }
    }

    getch();
}