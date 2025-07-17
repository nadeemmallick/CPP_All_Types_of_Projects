#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number";
    cin >> num;

    int lastdigit = num % 10;

    if (lastdigit % 2 == 0)
    {
        cout << "last digit is even";
    }
    else
    {
        cout << "last digit is odd";
    }
}