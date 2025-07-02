//CALCULATOR TO CALCULATE ADDITION AND MULTIPLICATION OF TWO NUMBERS
// This program takes two integers as input from the user and outputs their addition and multiplication.

#include<iostream>
using namespace std;
int main(){

    int x,y;

    cout<< "Enter the first number :";
    cin>> x;

    cout<< "Enter the second number :";
    cin>> y;

    int add = x+y;
    int multiply = x*y;

    cout<<"Addition of two number is :"<<add<<endl;
    cout<<"Multiplication of two number is :"<<multiply<<endl;
    

}