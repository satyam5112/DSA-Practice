// Find whether a number is prime or not.
#include<iostream>
using namespace std;
class checkPrime
{
    private:
    int num;
    public:

    void setdata(int)
    {
        cout<<"Enter the number:"<<endl;
        cin>>num;
    }

    int factor(int n)
    {
        int i,count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            count++;
        }
        return (count);
    }
    void display()
    {
        int counter=factor(num);
        if(counter==2)
        {
            cout<<"Given number is prime.";
        }
        else
        {
            cout<<"Given number is composite.";
        }
    }
};

// Driver code
int main()
{
    checkPrime number;
    number.setdata(100);
    number.display();

    return 0; 

}