// JOSEPHU'S PROBLEM.
#include<iostream>
using namespace std;
int josephus(int n , int k)
{
    if(n==1)
     return 0;
    else
    { 
        return (josephus(n-1,k)+k)%n;
    }
}
int main()
{
    int N,K;
    cout<<"Enter the number of person[n] : ";
    cin>>N;
    cout<<"\n"<<"Enter the killing factor[k] :";
    cin>>K;
    int result=josephus(N,K);
    cout<<"Position of last person is : "<<result;
return 0;
}