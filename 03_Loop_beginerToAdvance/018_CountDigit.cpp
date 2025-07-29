#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the number :";
    cin >> num;

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        for (; num > 0; num /= 10)
        {
            count++;
        }
    }
    cout << "Total digit :" << count;
}