// AREA OF CIRCLE
// This program calculates the area of a circle given its radius.

#include<iostream>
using namespace std;
int main() {
    float radius;
    float pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = pi * radius * radius;

    cout << "The area of the circle is: " << area << endl;

    return 0;
}