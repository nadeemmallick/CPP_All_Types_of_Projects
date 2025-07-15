#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character you want to check";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "It is an Alphabetic character";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is a Digit";
    }
    else
    {
        cout << "It is a Special character";
    }
}