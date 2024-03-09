#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex numbers
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the addition operator (+)
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the subtraction operator (-)
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading the multiplication operator (*)
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Function to display the complex number
    void display() const {
        cout << "(" << real << " + " << imag << "i)";
    }
};

int main() {
    double r1,r2,i1,i2;
    cout<<"----------Enter Real Part and imaginary Part----------\n";
    cout<<"                     Real: ";
    cin>>r1;
    cout<<"                     Imaginary: ";
    cin>>i1;
    cout<<"\n";
    cout<<"----------Enter Real Part and imaginary Part----------\n";
    cout<<"                     Real: ";
    cin>>r2;
    cout<<"                     Imaginary: ";
    cin>>i2;

    Complex num1(r1, i1);
    Complex num2(r2, i2);

    // Addition
    Complex sum = num1 + num2;
    cout << "Addition: ";
    num1.display();
    cout << " + ";
    num2.display();
    cout << " = ";
    sum.display();
    cout << endl;

    // Subtraction
    Complex diff = num1 - num2;
    cout << "Subtraction: ";
    num1.display();
    cout << " - ";
    num2.display();
    cout << " = ";
    diff.display();
    cout << endl;

    // Multiplication
    Complex product = num1 * num2;
    cout << "Multiplication: ";
    num1.display();
    cout << " * ";
    num2.display();
    cout << " = ";
    product.display();
    cout << endl;

    return 0;
}
