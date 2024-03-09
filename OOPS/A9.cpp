#include <iostream>
using namespace std;

template<typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 == 0) {
            cout << "Error! Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {

    double num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    
    cout<<"\n";
    cout<<"\n";
    // Create a Calculator object for integer type
    Calculator<int> intCalculator(num1,num2);
    cout << "Integer Calculator:" << endl;
    cout << "Addition: " << intCalculator.add() << endl;
    cout << "Subtraction: " << intCalculator.subtract() << endl;
    cout << "Multiplication: " << intCalculator.multiply() << endl;
    cout << "Division: " << intCalculator.divide() << endl;

    // Create a Calculator object for double type
    Calculator<double> doubleCalculator(num1,num2);
    cout << "\nDouble Calculator:" << endl;
    cout << "Addition: " << doubleCalculator.add() << endl;
    cout << "Subtraction: " << doubleCalculator.subtract() << endl;
    cout << "Multiplication: " << doubleCalculator.multiply() << endl;
    cout << "Division: " << doubleCalculator.divide() << endl;

    return 0;
}
