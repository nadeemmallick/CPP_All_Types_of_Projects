#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    
    for (int i = 1; i <= number; i++)
    {

        if (number % i == 0)
           cout << i <<" ";
        
    }
   
}