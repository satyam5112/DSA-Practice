// A program to print numbers from N to 1 and then from 1 to N.
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
     return ;
    cout<<n << " ";
    fun(n-1);
}
void fun2(int m)
{
    if(m==0)
     return;
    fun2(m-1);
    cout<<m<<" ";
}
int main()
{
    int num,num2;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Output Result: ";
    fun(num);
    cout<<"\n";
    cout<<"Enter a number: ";
    cin>>num2;
    cout<<"Output Result: ";
    fun2(num2);
return 0;
}