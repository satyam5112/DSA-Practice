#include<iostream>
using namespace std;
int main()
{   int i, sum,j=7;
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
        else{
            cout<<"Not a perfect number.";
        }
        return 0;
}