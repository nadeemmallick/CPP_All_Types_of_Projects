#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;

    int a = 1;

    for (int i = 1; i <= number; i++)
    {
        cout << a << endl;
        a *= 2;
    }
}