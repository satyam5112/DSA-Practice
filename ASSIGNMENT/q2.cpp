// A program to print ASCII value into character and character into ASCII value.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int option,number;
    char letter;
   
    cout<<"Click 1 : Convert character into ASCII value.";
    cout<<"\nClick 2 : Convert ASCII value into character.\n";
    cout<<"Enter your option:";
    cin>>option;
    
    switch (option)
    {
        case 1:
        cout<<"Enter a letter:";
        cin>>letter;
        cout<<"ASCII value of "<<letter<< " is: "<<int(letter);
        break;

        case 2:
        cout<<"Enter the number:";
        cin>>number;
        cout<<number<<" represents:"<<char(number);
        break;

        default :
        cout<<"INVALID INPUT";
        break;
    }
    return 0;
}