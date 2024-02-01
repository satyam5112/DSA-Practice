//Write a program to check for armstrong number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,r,originalnum,result=0;
    cout<<"Enter a number: ";
    cin>>num;
    originalnum=num;

    while(originalnum>0)
    {
        r=originalnum%10;
        result=(r*r*r)+result;
        originalnum=originalnum/10;
    }
        if(result==num)
        {
            cout<<"An Armstrong number.";
        }
        else
        {
            cout<<"Not an Armstrong number.";
        }
    return 0;
}