// This program converts days into years, hours, and minutes.
// It takes the number of days as input and calculates the equivalent years, hours, and minutes

#include<iostream>
using namespace std;
int main(){

    int day;

    cout<<"Enter the number of days : ";
    cin>>day;

    int year = day / 365;
    int hours = day *24;
    int minutes = day * 24 * 60;

    cout<<"The number of years : "<<year<<endl;
    cout<<"The number of hours : "<<hours<<endl;
    cout<<"The number of minutes : "<<minutes<<endl;
    return 0;

}