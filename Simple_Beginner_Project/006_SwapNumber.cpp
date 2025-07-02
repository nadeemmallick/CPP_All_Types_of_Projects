// SWAPPING TWO NUMBERS
// This program swaps the values of two integers using a temporary variable.

#include<iostream>
using namespace std;
int main(){

    int a,b,temp;

    cout<<"Enter the value of a :";
    cin>> a;

    cout<<"Enter the value of b :";
    cin>> b;

    temp = a;
    a=b;
    b= temp;

    cout<<"After swaping a :"<<a<<"\nAfter swaping b :"<<b;
}