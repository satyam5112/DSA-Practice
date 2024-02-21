// A program to calculate total amount to be paid after a discount of 50% and 40%.
#include<iostream>
using namespace std;
int main()
{
    float a,b,amount;
    cout<<"Enter the amount of purchase:";
    cin>>a;
    b=(50*a)/100;
    amount=(40*b)/100;
    cout<<"Total amount to pay after discount:"<<amount;
    return 0.0;
}