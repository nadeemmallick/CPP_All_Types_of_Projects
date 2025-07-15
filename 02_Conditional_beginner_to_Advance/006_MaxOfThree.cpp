#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter the  first number you wanted to : ";
    cin >> num1;
    cout << "Enter the  second number you wanted to : ";
    cin >> num2;
    cout << "Enter the  third number you wanted to : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "First number is greatest among all";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The second number is greater among all";
    }
    else
    {

        cout << "Third number is greater ";
    }
}