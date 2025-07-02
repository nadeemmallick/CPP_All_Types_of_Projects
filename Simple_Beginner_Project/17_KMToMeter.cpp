#include<iostream>
using namespace std;   
int main(){
    float km;
    
    cout << "Enter the distance in kilometers: ";
    cin >> km;

    // Convert kilometers to meters
    float meters = km * 1000;

    cout << "The distance in meters is: " << meters << " m" << endl;

    return 0;
}