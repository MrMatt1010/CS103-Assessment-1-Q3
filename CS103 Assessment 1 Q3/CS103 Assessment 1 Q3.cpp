// CS103 Assessment 1 Q3
// Student Name: Matt Taylor
// This program adds two 3 by 3 matices together store the result in matrix 3 and then multiplys it by 3



#include <iostream>
using namespace std;


int main(){
    // Declare and initialize A and B matrices
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int b[3][3] = {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };

    int c[3][3]; //Matrix to store the result
    
    // Perform the Addition of the A and B matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Multiply Matrix C by 3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] *= 3;
        }
    }

    // Display the inout from Matrix A and B
    cout << "Matrix A: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << std::endl;
    }

    cout << "Matrix B: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << std::endl;
    }

    //Display the output of Matrix C
    cout << "Result of Matrix C (Matrix A + B multiplied by 3):";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << std::endl;
    }
    return 0;
}

