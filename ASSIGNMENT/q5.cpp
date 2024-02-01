// A program to check for GFC/HCF of two number.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,gcf;
    cout<<"Enter two numbers: \n";
    cin>>num1>>num2;
    for(i=2;i<num1&&num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcf=i;
        }
    }
    cout<<"GCF of "<<num1<<" and "<<num2<<" is "<< gcf;
    return 0;
} 