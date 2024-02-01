//Write a program to check for armstrong number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,r,originalnum,result,i,num1,num2,temp,count;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    if(num1>num2)
    {
        temp=num1;
        num1=num2; 
        num2=temp;
    }
   for(i=num1;i<=num2;i++)
   {    
        count=0;
        num=i;
        while(num>0)
        {
            ++count;
            num=num/10;
        }
        originalnum=i;
        result=0;
        while(originalnum>0)
        {
            r=originalnum%10;
            result=result+pow(r,count);
            originalnum=originalnum/10;
        }
            if(result==i)
            {
                cout<<i<<",";
            }
    }
    return 0;
}