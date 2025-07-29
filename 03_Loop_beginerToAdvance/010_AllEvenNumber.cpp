#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            cout << "even number: " << i << endl;
        }
        else
        {
            cout << "odd number: " << i << endl;
        }
    }
}