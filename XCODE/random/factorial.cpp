// A program to find factorial with recursive approach.
#include<iostream>
using namespace std;
// Not a Tail Recursive approach
int fun(int N)
{
    if(N==0||N==1)
     return 1;
    return N*fun(N-1);
}   
// Tail Recursive approach
int fun2(int n,int k)
{   

    if(n==0|| n==1)
     return k;
    return fun2(n-1,k*n);
}
int main()
{
    int num,num2;
    cout<<"Enter a number: ";
    cin>>num;
    // cout<<"\n";
    int result = fun(num);
    cout<<"Factorial of given number is: "<<result;
    cout<<"\n";
    cout<<"\n";
    cout<<"Enter a number: ";
    cin>>num2;
    // cout<<"\n";
    int result2 = fun2(num2,1);                          //Second parameter is given 1 to run the functon properly.
    cout<<"Factorial of given number is: "<<result2;
return 0;
}