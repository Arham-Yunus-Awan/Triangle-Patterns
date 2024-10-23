# include <iostream>
using namespace std;
int main() {
    // Right-Angled Triangle (Aligned to the left)
    cout << "Right-Angled Triangle (Aligned to the left): " << endl << endl;
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl << endl;
    }

    // Inverted Right-Angled Triangle (Aligned to the left)
    cout << "Inverted Right-Angled Triangle (Aligned to the left): " << endl << endl;
    // int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 5; j >= i; j--) {
            cout << "*";
        }
        cout << endl << endl;
    }

    // Right-Angled Triangle (Aligned to the right)
    cout << "Right-Angled Triangle (Aligned to the right): " << endl << endl;
    // int rows = 5;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows - i ; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl << endl;
    }

    // Inverted Right-Angled Triangle (Aligned to the right)
    cout << "Inverted Right-Angled Triangle (Aligned to the right): " << endl << endl;
    // int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl << endl;
    }

    // Isosceles Triangle 
    cout << "Isosceles Triangle: " << endl << endl;
    // int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) { 
            // In above condition of loop, use arthematic series formala to find nth formula for number of asteriks in a row
            cout << "*";
        }
        cout << endl << endl;
    }

    return 0;

}