// A program for sum of first N numbers.
#include<iostream>
using namespace std;

int sum(int n)
{   
    if(n==0|| n==1)
     return n;
    return n+sum(n-1); 
}
int main()
{
    int num;
    cout<<"'Enter a number: ";
    cin>>num;
    int result = sum(num);
    cout<<"Sum = "<<result;
    return 0;
}