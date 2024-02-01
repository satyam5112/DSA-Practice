// Defining structure.
#include<iostream>
#include<string>
using namespace std;

struct student
    {
        string name;
        string roll;
        string parent_name;
        string phone_number;
        string address;
    
    };


int main()
{
    struct student st1;
    st1.name=" SATYAM SINGH";
    st1.roll=" 23153065";
    st1.parent_name=" Upendra Kumar";
    st1.phone_number= "74940+31278";
    st1.address=" Tararh";
    cout<<"Name of student is:"<<st1.name<<"\n";
    cout<<"Roll number of student is:"<<" "<<st1.roll<<"\n";
    cout<<"Parent"<<"'"<<"s name is:"<<st1.parent_name<<"\n";
    cout<<"Phone number is:"<<" "<<st1.phone_number<<"\n";
    cout<<"Address is:"<<st1.address<<"\n";
    return 0;
}
