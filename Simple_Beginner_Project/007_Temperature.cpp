// Temperature Conversion Program
// This program converts a temperature from Celsius to Fahrenheit.

#include <iostream>
using namespace std;    
int main(){

    float celsius;
     cout<<"Enter the value of celsius :";
     cin>>celsius;

     float fahrenheit =(celsius*9/5)+32;

     cout<<"After converting celsius to fahrenheit is :"<<fahrenheit<<endl;
    
    return 0;
}