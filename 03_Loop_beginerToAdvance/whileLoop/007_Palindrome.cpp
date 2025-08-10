#include <iostream>
using namespace std;
int main()
{

    int num, original, rem, rev = 0;
    cout << "enter the positive number :" << endl;
    cin >> num;
    original = num;

    while (num != 0)
    {
        rem = num % 10;       // last digit nikla
        rev = rev * 10 + rem; // reverse krr ke rem add kro
        num /= 10;            // last num remove kro
    }

    if (original == rev)
    {
        cout << "the given number is palindrome";
    }
    else
    {
        cout << "not a palindoome";
    }
}