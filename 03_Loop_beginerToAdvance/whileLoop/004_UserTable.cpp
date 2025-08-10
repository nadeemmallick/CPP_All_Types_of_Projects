#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (i<=10)
    {
       cout<<n<<"x"<<i<<"="<<n*i<<endl;
       i++;
    }
   
}
