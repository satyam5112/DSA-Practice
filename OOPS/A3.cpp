// PATTERN PRINTING.

#include<iostream>
using namespace std;

int main() {
    int h;
    cout << "Enter the height: ";
    cin >> h;

    for(int i = h; i >= 1; i--) {
        char al = 'A';
        // Print spaces before characters
        for(int j = h; j > i; j--) {
            cout << "  ";
        }
        // Print characters in increasing order
        for(int j = 1; j <= 2*i-1; j++) {
            cout << al++;
            if (al > 'Z')  // Reset al to 'A' after 'Z'
                al = 'A';
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}