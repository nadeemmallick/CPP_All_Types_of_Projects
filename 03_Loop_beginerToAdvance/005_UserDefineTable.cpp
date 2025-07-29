#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;

    for (int i = number; i <= 10 * number; i += number)
    {
        cout << i << endl;
    }
}