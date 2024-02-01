// Write a program in c++ that takes salary as input,if the salary is 20000 or more, it deducts 7% of the salary.
// If the salary is 10000 or more but less than 20000 it deduct 1000 from the salary.If the salary is 10000,
// it deducts nothing . It finally displays the net salary.
#include<iostream>
using namespace std;
int main()
{
    int salary,netsalary;
    cout<<"Enter the salary: ";
    cin>>salary;
    if(salary>=20000)
    {
        netsalary=salary-(0.07*salary);
        cout<<"NET SALARY=Rs."<<netsalary;
    }
    else if(salary>10000)
    {
        netsalary=salary-1000;
        cout<<"NET SALARY=Rs."<<netsalary;
    }
    else 
    {
        netsalary=salary;
        cout<<"NET SALARY=Rs."<<netsalary;
    }
    return 0;
}