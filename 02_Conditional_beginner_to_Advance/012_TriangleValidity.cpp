#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout << "Enter the first side of triangle :";
    cin >> a;

    cout << "Enter the second side of triangle :";
    cin >> b;

    cout << "Enter the third side of triangle :";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Its is a vlaid triangle";
    }
    else
    {
        cout << "it ius not a valid triangle";
    }
}