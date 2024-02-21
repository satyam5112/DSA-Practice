// A pogram to check if given input is for rectangle or a square.
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter the values in cm\n"
    cout<<"Enter the value of l:";
    cin>>l;
    cout<<"Enter the value of b:";
    cin>>b;
    if(l!=b)
    {
        cout<<"RECTNGLE";
    }
    else
    {
        cout<<"SQUARE";
    }
    return 0;
}