// A program to solve an equation for x.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float x,y;
cout<<"Enter the value of x:";
cin>>x;
y=(pow(x,6)+pow(x,4)+pow(x,2)+10)/(pow(x,5)+pow(x,3));
// y=(x*x*x*x*x*x+x*x*x*x+x*x+10)/(x*x*x*x*x+x*x*x+x);
cout<<"Y="<<y;
return 0.0;
}