// BILL GENERATOR PROGRAM
// This program calculates the total bill based on the price of a product and its quantity.

#include <iostream>
using namespace std;    
int main(){
    int price,quantity;

    cout<<"Enter the price of product :";
    cin>>price;

    cout<<"Enter the quantity of item :";
    cin>>quantity;

    int total = price*quantity;

    cout<<"The final bill is :$"<<total;

    return 0;
}