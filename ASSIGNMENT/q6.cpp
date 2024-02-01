// A program to check for perfect number.
#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
   for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }    
        if(sum==num)
        {
            cout<<"Perfect Number.";
        }
        else
        {
            cout<<"Not a perfect number.";
        }
        return 0;
}