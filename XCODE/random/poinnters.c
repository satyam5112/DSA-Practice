#include<stdio.h>
int main()
{
    int a=10;
    int *b = &a;
    scanf("%d",*b);
    printf("%d",*b);
    printf("%d", a+50);
    return 0;
}