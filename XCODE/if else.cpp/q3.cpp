// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
#include<iostream>
using namespace std;
int main()
{
    int quantity,price,amount;
     
    cout<<"Enter the quantity:";
    cin>>quantity;
    cout<<"Enter the pricce :Rs.";
    cin>>price;
    amount=price*quantity;
    if(amount>1000)
    {
        cout<<"Total amount is:Rs."<<(amount-(amount*.1));
    }
    else
    {
        cout<<"Total price is:Rs."<<amount;
    }
}
