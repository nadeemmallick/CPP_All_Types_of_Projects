#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 33)
    {
        cout << "You pass the Exam";
    }
    else
    {
        cout << "Sorry but try next time ";
    }
}