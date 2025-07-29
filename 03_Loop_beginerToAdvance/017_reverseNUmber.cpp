#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    int rev = 0;

    for (; number > 0; number = number / 10)
    {
        int digit = number % 10;
        rev = rev * 10 + digit;
    }
    cout << rev;
}