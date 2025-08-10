#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "start and end range :";
    cin >> start >> end;

    cout << "even numberr:";
    int i = start;
    while (i <= end)
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    }
    cout << "odd numberr:";
    i = start;
    while (i <= end)
    {
        if (i % 2 != 0)
            cout << i << " ";
        i++;
    }
    return 0;
}