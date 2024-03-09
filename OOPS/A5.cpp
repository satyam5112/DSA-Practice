#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Include the algorithm library for sorting
using namespace std;

// Define a struct to store item name and quantity
struct Item {
    string name;
    int quantity;
};

// Function to print the shopping list
void printList(const vector<Item>& items) {
    cout << "---------------> SHOPPING LIST <---------------" << endl;
    for (int i = 0; i < items.size(); ++i) {
        cout << "ITEM " << i + 1 << ": " << items[i].name << " (Quantity: " << items[i].quantity << ")" << endl;
    }
}

// Function to compare items by name (for sorting)
bool compareByName(const Item& a, const Item& b) {
    return a.name < b.name;
}

// Function to compare items by quantity (for sorting)
bool compareByQuantity(const Item& a, const Item& b) {
    return a.quantity < b.quantity;
}

// Function to sort the shopping list
void sortList(vector<Item>& items, char option) {
    switch (option) {
        case 'N':
        case 'n':
            sort(items.begin(), items.end(), compareByName);
            cout << "Shopping list sorted by name." << endl;
            break;
        case 'Q':
        case 'q':
            sort(items.begin(), items.end(), compareByQuantity);
            cout << "Shopping list sorted by quantity." << endl;
            break;
        default:
            cout << "Invalid sorting option." << endl;
            break;
    }
}

int main() {
    char choice;
    vector<Item> shoppingList; // Use a vector of Item structs to store items

    do {
        cout << "Enter 'Y' or 'y' to add an item, 'E' or 'e' to edit, 'R' or 'r' to remove, 'S' or 's' to sort, or 'N' or 'n' to stop: ";
        cin >> choice;

        switch (choice) {
            case 'Y':
            case 'y': {
                Item newItem;
                cout << "Enter item name: ";
                cin >> newItem.name;
                cout << "Enter quantity: ";
                cin >> newItem.quantity;
                shoppingList.push_back(newItem); // Add the item to the list
                break;
            }
            case 'E':
            case 'e':
                // Edit item function
                break;
            case 'R':
            case 'r':
                // Remove item function
                break;
            case 'S':
            case 's': {
                char sortOption;
                cout << "Sort by (N)ame or (Q)uantity: ";
                cin >> sortOption;
                sortList(shoppingList, sortOption);
                break;
            }
            case 'N':
            case 'n':
                break; // Exit the loop
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while (choice != 'N' && choice != 'n');

    // Print the shopping list
    printList(shoppingList);

    return 0;
}
