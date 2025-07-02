// FINDING THE AREA OF RECTANGLE
// This program calculates the area of a rectangle based on user-provided length and width.

#include <iostream>
using namespace std;    
int main(){
    
    int length, width;

    cout << "Enter the length of Rectangle :";
    cin >> length;

    cout << "Enter the width of Rectangle :";
    cin >> width;

    int area = length*width;

    cout<< "Area of rectangle is :"<< area ;
    return 0;
}
