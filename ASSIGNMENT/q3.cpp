// Write a program to print Fibonaacci sequence.
#include<iostream>
using namespace std;
int main()
{
    int n,num1=0,num2=1,nextnum;
    cout<<"'Enter a number:";
    cin>>n;
    if(n<=2)
    {
        cout<<"Enter a number >=3";
        return 1;
    }
    cout<<num1<<","<<num2<<",";
    for(int i=3;i<=n;i++)
    {
        nextnum=num1+num2;
        cout<<nextnum;
        if(i<n)
        {
            cout<<",";
        }
        num1=num2;
        num2=nextnum;
    }
    return 0;
}