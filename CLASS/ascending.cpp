// A program to print given input integer in ascending order.
#include<iostream>
using namespace std;

class ascending
{
    private:
    int a,b,c;
    public:

    void setdata()
    {
        cout<<"Enter three integers.";
        cin>>a>>b>>c;
    }
    int getdata(int a,int b,int c)
    {
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
    int display()
    {
       int show=getdata(a,b,c);
    }
};
int main(void)
{
    ascending number;
    number.setdata();
    number.display();

    return 0;
}