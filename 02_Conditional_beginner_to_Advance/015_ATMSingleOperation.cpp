#include <iostream>
using namespace std;
int main()
{
    int choice, balance = 10000, amount;

    cout << "1.Press 1 for checking your balance.\n2.press 2 for withdrawn.\n3.Press 3 for deposit." << endl;
    cout<<"Enter your choice :";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Your current balance is :" << balance;
    }
    else if (choice == 2)
    {
        cout<<"Enter the amount you wanted to withdraw :";
        cin >> amount;
        if (amount <= balance)
        {
            cout << "Please wait money is withdrawling :" << amount;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
    else if (choice == 3)
    {
        cout<<"Enter the you wanted to deposite :";
        cin >> amount;
        cout << "The money is deposite :" << amount;
    }
    else
    {
        cout << "Exit";
    }
}