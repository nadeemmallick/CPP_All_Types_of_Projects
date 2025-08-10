#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n%10; // get last digit
        sum = sum+digit; // add last digit to sum
        n/=10; // remove used number
        
    }
    cout << "Sum of digits: " << sum << endl;
}