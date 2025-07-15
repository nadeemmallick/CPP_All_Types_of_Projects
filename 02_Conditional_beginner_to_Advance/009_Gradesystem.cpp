#include <iostream>
using namespace std;
int main()
{

    int marks;

    cout << "Enter the marks to check your grade";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 80)
    {
        cout << "Grade B";
    }
    else if (marks >= 70)
    {
        cout << "Grade C";
    }
    else if (marks >= 33)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }
}