// A program to print all prime numbers between 100 and 500 which are also palindrome.
#include<iostream>
using namespace std;
int main()
{   
    int num1=100,num2=500,i,j,count,result,r,q;
    for(i=num1;i<=num2;i++)
    {  
         count=0;

        for(j=1;j<=i;j++)
        { 
            if(i%j==0)
          {
             count++;
          }
        }

    if(count==2)
        {
            q=i;
            result=0;
            while(q!=0)
            {
                r=q%10;
                result=(result*10)+r;
                q=q/10;
            }
            if(result==i)
            {
                cout<<i<<",";
            }

        }
   
    }
   return 0;
}