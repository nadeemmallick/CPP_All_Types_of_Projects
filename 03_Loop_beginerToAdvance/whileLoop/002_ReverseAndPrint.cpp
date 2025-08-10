#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10; // last digit
        reversed = reversed * 10 + digit; // apend digit into reversed
        n /= 10; // removed the used number
    }
    cout << reversed;
}
