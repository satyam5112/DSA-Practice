#include<iostream>
using namespace std;
int main()
{
    float a,b,x,y,m,n,sum;

    cout<<"Enter first value:";
    cin>> a;
    cout<<"Enter second value:";
    cin>> b;
    cout<<"Enter X%=";
    cin>>x;
    cout<<"Enter Y%=";
    cin>>y;

    m=(x*a)/100;
    n=(y*b)/100;

    sum=m+n;
    cout<<"\nSUM IS ="<<sum;

    return 0;
    }
