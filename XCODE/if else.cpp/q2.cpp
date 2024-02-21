// Take two integer values from user and print greatest of them.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"Enter the second value:";
    cin>>b;
    if(a>b)
    {
        cout<<"Greatest value among two is:"<<a;
    }
    else
    {
        cout<<"Greatest value among two is:"<<b;
    }
    return 0;
}