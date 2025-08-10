#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }
    cout << "Total digit: " << count << endl;
}