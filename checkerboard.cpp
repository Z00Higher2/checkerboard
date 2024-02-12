// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4B
// Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular checkerboard of the requested size 
// using asterisks and spaces (alternating).


#include <iostream>
using namespace std;

int main(){
    int width, height; // declared width and height

    cout << "Input width: ";
    cin >> width; // User inputs width

    cout << "Input height: ";
    cin >> height; // User inputs height

    cout << endl;

    for (int row = 0; row < height; row++) { // for each row
    for (int col = 0; col < width; col++) { // for each column

        if (row % 2 == 0 && col % 2 == 0){

            cout << "*"; // for each column and row that are even

        } else if (row % 2 == 0 && col % 2 == 1){

            cout << " "; // for each row that is even and the column is odd

        } else if (row % 2 == 1  && col % 2 == 0){

            cout << " "; // for each column that is even and the row is odd

        } else if (row % 2 == 1  && col % 2 == 1){

            cout << "*"; // for each column and row that are both odd
        
        } 
    }
        cout << endl;

}

    return 0;
}