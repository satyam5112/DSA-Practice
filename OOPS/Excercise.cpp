// Program for inheritance.
// Exercise for building hybrid calculator using two classes .
// 1.For simple calculator.
// 2. For scientific calculator.
#include <iostream>
#include <cmath>
using namespace std;

class Simplecalculator
{
public:
    float a, b;
    char c;
    void setdata()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
    void operation()
    {
        do
        {
            cout << "Enter the operator: '+' , '-' , '*' , '/' , 'e': Exit " << endl;
            cin >> c;

            switch (c)
            {
            case '+':

                cout << "Sum of given numbers is: " << a + b << endl;
                break;

            case '-':

                cout << "Difference of given numbers is:" << a - b << endl;
                break;

            case '*':

                cout << "Product of given number  is:" << a * b << endl;
                break;

            case '/':

                if (b > 0)
                {
                    cout << "Quotient for given number is: " << a / b << endl;
                }
                else
                {
                    cout << "Not Divisible" << endl;
                    break;
                }
            case 'e':

                exit;
                break;

            default:
                cout << "Invalid Input/n" << endl;
                break;
            }
        } while (c != 'e');
    }
};
class Scientificalculator
{
public:
    int x;
    int choice;
    void setdata()
    {
        cout << "Enter a number: " << endl;
        cin >> x;
    }
    void operation()
    {
        do
        {
            cout << "Enter choice: 1.log 2.exp 3.cos 4.sqrt 5.Cbrt 6.Exit " << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:

                cout << "Log of given input is: " << log(x) << endl;
                break;

            case 2:

                cout << "Exponent of the given number is: " << exp(x) << endl;
                break;

            case 3:

                cout << "Cos of the given number is: " << cos(x) << endl;
                break;

            case 4:

                cout << "Square root of given number is: " << sqrt(x) << endl;
                break;

            case 5:

                cout << "Cube root of given number is: " << cbrt(x) << endl;
                break;

            case 6:

                exit;
                break;

            default:

                cout << "Invalid Input." << endl;
                break;
            }
        } while (choice != 6);
    }
};
class hybridcalculator : public Simplecalculator, public Scientificalculator
{

public:
    char t;
    void choose()
    {
        do
        {
            cout << "Choose 's':Simple calculator \t 'c' : Scientific Calculator \t 'e' : Exit\n";
            cin >> t;

            switch (t)
            {
            case 's':

                Simplecalculator::setdata();
                Simplecalculator::operation();
                break;

            case 'c':
                Scientificalculator::setdata();
                Scientificalculator::operation();
                break;

            case 'e':
                exit;
                break;

            default:

                cout << "Invalid character.\n";
                break;
            }

        } while (t != 'e');
    }
};
int main()
{
    hybridcalculator calc;
    calc.choose();
    return 0;
}