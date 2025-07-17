#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number :";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "Number is divided by 3 and 5 both";
    }
    else if (num % 3 == 0)
    {
        cout << "Number is divided only by 3";
    }
    else if (num % 5 == 0)
    {
        cout << "Number is divided only by 5";
    }
    else
    {
        cout << "Not  divided by both";
    }
}