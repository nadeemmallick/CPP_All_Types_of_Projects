#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    int sum = 0;

    for (int i = 2; i <= number; i += 2)
    {
        sum += i;
    }
    cout << "sum of all even no is " << sum;
}