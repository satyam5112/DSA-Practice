// A program to convert decimal number into binary number.
#include<iostream>
using namespace std;
void fun1(int n)
{
    if(n==0)
     return;
    fun1(n/2);
     cout<<n%2;
}
int main()
{
    int num;
    cout<<"Enter a decimal number: ";
    cin>>num;
    cout<<"\n";
    cout<<"Number in binary formate: ";
    fun1(num);
    return 0;
}