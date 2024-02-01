// Write a program to print fee structure.
#include<iostream>
using namespace std;
int main()
{
    int option1,option2;
    cout<<"Enter your year:"<<endl;
    cin>>option1;
   
    switch (option1)
    {
        case 1:
            cout<<"Enter your category:"<<endl;
            cout<<"Option 1: For General and BC category  Option 2: For SC & ST"<<endl;
            cin>>option2;
        
        switch(option2)
        {
            case 1:
            cout<<"Your Fee structure for 1st year"<<endl;
            cout<<"Admission Fee:Rs.10"<<endl;
            cout<<"Tution Fee:Rs.120"<<endl;
            cout<<"Registration Fee:Rs.2100"<<endl;
            cout<<"Exam Fee:Rs.7400"<<endl;
            cout<<"Hostel Fee:Rs.9600"<<endl;
            cout<<"Mess Fee:Rs.33600"<<endl;
        }
    }
    return 0;
}