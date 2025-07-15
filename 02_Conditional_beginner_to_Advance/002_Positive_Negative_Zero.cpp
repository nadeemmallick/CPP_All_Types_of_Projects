#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number you wanted to check" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "The given number is Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "The given number is Negative" << endl;
    }
    else
    {
        cout << "The given number is zero" << endl;
    }
}