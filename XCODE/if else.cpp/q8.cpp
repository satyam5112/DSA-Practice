// A program to find focal length.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float f,f_,u,v;
    cout<<"Enter the values in cm\n";
    cout<<"Enter the value of u(object distance):";
    cin>>u;
    cout<<"Enter the value of v(image distance):";
    cin>>v;
    f_=((1/u)+(1/v));
    f=pow(f_,-1);
    cout<<"The focal length is:"<<f;
}