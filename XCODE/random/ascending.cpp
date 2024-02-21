// Program to print given numbers in ascending order.
#include<iostream>
using namespace std;
   
    int getdata()
{
    int a,b,c;
    cout<<"Enter three number:"<<endl;
    cin>>a>>b>>c;

    if(a>b&&b>c)
    {
    cout<<a<<","<<b<<","<<c;
    }
    else if(a>b&&c>b)
    {
    cout<<a<<","<<c<<","<<b;
    }
    else if(b>a&&a>c) 
    {
    cout<<b<<","<<a<<","<<c;
    }
    else if(b>c&&c>a)
    {
    cout<<b<<","<<c<<a;
    }
    else if(c>a&&a>b)
    {
    cout<<c<<","<<a<<","<<b;
    }
    else if(c>>b&&b>>a)
    {
    cout<<c<<","<<b<<","<<a;
    }
    return 0;
}


int main()
{
    getdata();
    
    return 0;
} 