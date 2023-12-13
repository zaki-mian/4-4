#include <iostream>
using namespace std;

int main() {
    int array[2];
    int userNum;
    
    cout << "\nEnter the number: "; 
    cin >> userNum;
    
    int sum = 0;

    while (sum != userNum) { 
        sum = 0;

        for (int i = 0; i < 2; i++) {
            array[i] = rand() % userNum;
        }

        for (int i = 0; i < 2; i++) {
            sum += array[i];
        }
    }

    int a, b;
    a = array[0];
    b = array[1];

    int arr2[2][2];

    // assigning the a, b position in magic square to align with rules
    arr2[0][0] = a; 
    arr2[0][1] = b; // row 1
    arr2[1][0] = b; 
    arr2[1][1] = a; // row 2

    // printing array
    int sumNum = 0;
    cout << endl;

    for (int i = 0; i < 2; i++) {
        sumNum = 0;
        cout << endl << "\t";

        for (int m = 0; m < 2; m++) {
            cout << arr2[i][m] << "   ";
            sumNum += arr2[i][m];
        }

        cout << "  " << sumNum << endl;
    }

    cout << endl << endl;
    cout << "   " << sumNum << "   " << userNum << "  " << userNum << "     " << userNum << endl;

    return 0;
}
