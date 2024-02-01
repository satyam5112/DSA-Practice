// Write a c++ program to input week day(integer) and sisplay the name of day.
#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"Enter number(1-7): ";
    cin>>week;
    switch(week)
    {
        case 1:
        cout<<"MONDAY";
        break;
        case 2:
        cout<<"TUESDAY";
        break;
        case 3:
        cout<<"WEDNESDAY";
        break;
        case 4:
        cout<<"THURSDAY";
        break;
        case 5:
        cout<<"FRIDAY";
        break;
        case 6:
        cout<<"SATURDAY";
        break;
        case 7:
        cout<<"SUNDAY";
        break;
        default:
        cout<<"INVALID INPUT";
        break;
    }
    return 0;
}