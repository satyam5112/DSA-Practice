//  A program to calculate total amount to be paid after a discount of 40%,40% and 20%.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,amount;
    cout<<"Enter the amount of purchase:";
    cin>>a;
    b=(40*a)/100;
    c=(40*b)/100;
    amount=(20*c)/100;
    cout<<"Total amount to pay after discount:"<<amount;
    return 0.0;
}