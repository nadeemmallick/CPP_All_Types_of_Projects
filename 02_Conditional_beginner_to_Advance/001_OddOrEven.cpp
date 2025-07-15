#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number you wanted to check" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The given number is Even" << endl;
    }
    else
    {
        cout << "The given number is not even it is odd" << endl;
    }
}