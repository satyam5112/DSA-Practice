// Program to print all possible combinations between 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter three digits:"<<endl;
    cin>>num1>>num2>>num3;
    cout<<num1<<num2<<num3<<endl;
    cout<<num1<<num3<<num2<<endl;
    cout<<num2<<num1<<num3<<endl;
    cout<<num2<<num3<<num1<<endl;
    cout<<num3<<num1<<num2<<endl;
    cout<<num3<<num2<<num1<<endl;

    return 0;
}