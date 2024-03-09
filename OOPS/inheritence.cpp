// a aprogram to show inheritance.
#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
        int id;
        float salary;
        Employee(int ide){
        id=ide;
        salary=1234.0;
        }
        Employee(){};
};
class Bank{
    int noOfEmployee;
    int branchid;
    public:
        string name;
        string managername;
        string address;
        int noOfConsumer;
        float roi;

        Bank(){};
};
class BOB:public Bank{
    public:
    BOB(int branchid){
        name="BANK OF BARODA";
        managername= "Suraj Kumar";
        address="PALI ROAD DOS";
        noOfConsumer=1000;
        roi=6.6;
    }
};
// Whenever we make a derived class it calls constructor of Base class.

// syntax for derived class:
// class{{derive class name}}:{{visibility}} {{Base class}}

// NOTE:
// 1.Default visibility mode is PRIVATE.
// 2.Public visibility mode: Public members of Base class --->>> Public members of derived class.
// 3.Private visibility mode: Public members of Base class --->>> Private  members of derived class.
// 4.Private members of Base class cannot be Inherited.

class Programmer:public Employee{       //In this case we are taking visibility as pubic, 
    public:                             //by defaylt it is private.
    int language;
    Programmer(int ide){
        id=ide;             //Derived class will call Base class constructor to get the id
        language=9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee satyam(111),suraj(222);
    cout<<satyam.salary<<endl;
    cout<<suraj.salary<<endl;
    Programmer Robind(333);
    cout<<Robind.id<<endl;          //Inheriting 'id' of base class Employee into Derived class Programmer 
    cout<<Robind.language<<endl;    
    Robind.getdata();               //To call the member function getdata() for object Robind.

    Bank SBI();
    BOB DOS(111);
    cout<<"Name of Bank: "<<DOS.name<<endl;
    cout<<"Manager Name: "<<DOS.managername<<endl;
    cout<<"Address: "<<DOS.address<<endl;
    cout<<"No. of consumer:"<<DOS.noOfConsumer<<endl;
    cout<<"Rate Of Interest: "<<DOS.roi<<endl;
    return 0;
}