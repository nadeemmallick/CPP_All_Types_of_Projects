//Volume of Cube
// This program calculates the volume of a cube given the length of its side.

#include<iostream>
using namespace std;
int main() {
    int side;

    cout << "Enter the side of the cube: ";
    cin >> side;

    int volume_of_cube = side * side * side;

    cout << "The volume of cube  is: " << volume_of_cube << endl;
}