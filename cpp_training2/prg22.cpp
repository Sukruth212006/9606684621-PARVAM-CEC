/*c++ program to print * using for loop with rows and column input from user*/
#include <iostream>
using namespace std;
int main() {
    int rows, columns;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}