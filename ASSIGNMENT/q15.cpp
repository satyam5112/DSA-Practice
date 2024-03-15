// Program to construct matrix variable usingthe class type objects.
#include <iostream>
using namespace std;

class Matrix
{
private:
    int rows, cols;
    int **data;

public:
    // Constructor to initialize the matrix with given dimensions
    Matrix(int rows, int cols)
    {
        this->rows = rows;
        this->cols = cols;
        data = new int *[rows];
        for (int i = 0; i < rows; ++i)
            data[i] = new int[cols];
    }

    // Destructor to free memory allocated for the matrix
    ~Matrix()
    {
        for (int i = 0; i < rows; ++i)
            delete[] data[i];
        delete[] data;
    }

    // Method to set value at a particular position in the matrix
    void setValue(int row, int col, int value)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
            data[row][col] = value;
        else
            cout << "Invalid position!" << endl;
    }

    // Method to get value at a particular position in the matrix
    int getValue(int row, int col)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
            return data[row][col];
        else
        {
            cout << "Invalid position!" << endl;
            return -1; // Or any other suitable default value
        }
    }
};

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Creating a matrix object
    Matrix matrix(rows, cols);

    // Setting values in the matrix
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            int value;
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> value;
            matrix.setValue(i, j, value);
        }
    }

    // Displaying the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix.getValue(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
