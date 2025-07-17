#include <iostream>
using namespace std;
int main()
{

    float income, tax = 0;

    cout << "Enter your Income here :";
    cin >> income;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = income * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = income * 0.10;
    }
    else
    {
        tax = income * 0.30;
    }

    cout << "tax in $ is :" << tax << endl;
    cout << "The amount you have after paying the tax :" << income - tax;
}