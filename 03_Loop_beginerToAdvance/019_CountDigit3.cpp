#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter the number :";
    cin >> number;

    for (; number > 0; number /= 10)
    {
        int digit = number % 10;
        if (digit == 3)
        {
            count++;
        }
    }
    cout << "Digit 3 appears" << count << "times";
}