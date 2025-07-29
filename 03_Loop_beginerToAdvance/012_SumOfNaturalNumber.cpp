#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    cout << "Sum of natural numbers up to " << number << " is: " << sum << endl;
    return 0;
}