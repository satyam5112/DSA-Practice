// SWAPPING
#include<stdio.h>
int main()
{   
    int a,b,temp;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);

temp=a;
a=b;
b=temp;

printf("Value in a is:%d and in b is:%d",a,b);
return 0;
}
