// Simple Intrest Calculation Program
// This program calculates the simple interest based on the principal amount, rate of interest, and time in years.

#include<iostream>
using namespace std;
int main(){

    float principal,rate,time;

    cout<<"Enter the principal ammount :$";
    cin>>principal;

    cout<<"Enter the rate :";
    cin>>rate;

    cout<<"Enter the time :";
    cin>>time;

    int simple_intrest =(principal*rate*time)/100;

    cout<<"Simple Intrest is :$"<<simple_intrest;
}