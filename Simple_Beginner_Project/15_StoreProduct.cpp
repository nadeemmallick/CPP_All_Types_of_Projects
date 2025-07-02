// This program collects product details and calculates the total cost based on the price and quantity.
// It prompts the user to enter the product name, price, and quantity, and then displays

#include<iostream>
using namespace std;
int main(){
    string name;
    float price;
    int quantity;
    
    cout << "Enter the name of the product: ";
    cin >> name;

    cout << "Enter the price of the product: $";
    cin >> price;

    cout << "Enter the quantity of the product: ";
    cin >> quantity;

    float totalCost = price * quantity;
    cout << "\n--- Product Details ---" << endl;

    cout<< "Product Name: " << name << endl;
    cout<<"Total Cost: $" << totalCost << endl;

}