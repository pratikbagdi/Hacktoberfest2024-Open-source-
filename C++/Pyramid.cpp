#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input the number of rows for the pyramid
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; ++i) {
        
        // Print spaces to align pyramid
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  ";  // Two spaces for better alignment
        }

        // Print stars for the pyramid
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
