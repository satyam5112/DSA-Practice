//  A program to solve an equation for valu of x.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the value of x:";
    cin>>x;
    y=(pow(x,1/6)+pow(x,1/4)+pow(x,1/2)+10)/(pow(x,1/5)+pow(x,1/3)+x);
    cout<<"Y="<<y;
    return 0.0;
}