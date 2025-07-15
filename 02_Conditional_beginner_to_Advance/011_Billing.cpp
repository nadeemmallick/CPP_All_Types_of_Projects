#include <iostream>
using namespace std;
int main()
{

    float unit;
    float bill;

    cout << "Enter the unit :";
    cin >> unit;

    if (unit <= 100)
    {
        bill = unit * 1;
    }
    else if (unit <= 200)
    {
        bill = unit * 2;
    }
    else
    {
        bill = unit * 3;
    }

    cout << "Total amount you have to pay :" << bill;
}