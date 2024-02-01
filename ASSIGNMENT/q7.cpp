// Write a c++ program that inputs a character from user and checks whether it is a vowel or consonent.
#include <iostream>
using namespace std;
int main()
{
    int i;
    char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char input;
    cout << "Enter a character: ";
    cin >> input;
    for (i = 0; i < 10; i++)
    {
        if (input == arr[i])
        {
            cout << "VOWEL";
            break;
        }
        else
        {
            cout << "CONSONENT";
            break;
        }
    }
    return 0;
}