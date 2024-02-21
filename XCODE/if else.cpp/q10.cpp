// Write a program to take a three digit number and print it in revarse order.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,x;
    cout<<"Enter a three digit number:";
    cin>>a;
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    f=e*10+d;
    x=(f*10)+b;
    cout<<"Reverse of given number is:"<<x;
    return 0;
} 