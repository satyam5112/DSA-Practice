// Declaring class
#include<iostream>
using namespace std;

class cars
{
public:
   string name;
   string owner;
   void printname();
   void printowner();
//    {
//     cout<<"The name of the car is:"<<name;
//    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
void cars::printname()
   {
    cout<<"The name of the car is:"<<name;
   }
void cars::printowner()
{
    cout<<"\nThe owner is:"<<owner;
}
int main()
{
    cars car1;    //OBJECT IS CAR1.
    car1.name=" BUGGATI";
    car1.printname();
    car1.owner=" SATYAM SINGH";
    car1.printowner();
    return 0;
}
