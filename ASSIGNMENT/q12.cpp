// A program to print all perfect number til the number given by user.
#include<iostream>
using namespace std;
int main() 
{
  int input,i,j,sum;
    cout<<"Enter a number: ";
    cin>>input;
    for(j=6;j<=input;j++)
    {   
          sum=0;
      for(i=1;i<j;i++)
      {
        if(j%i==0)
        {
            sum=sum+i;
        } 
      }    
        if(sum==j)
        {
          cout<<j<<",";
        }
    }
    return 0;
}