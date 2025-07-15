#include <iostream>
using namespace std;
int main()
{

    string user, password;
    cout << "Enter your user name :";
    cin >> user;
    // No changes needed here for password input type.
    // The password variable can already accept both characters and digits as a string.
    cout << "Enter your password :";
    cin >> password;

    if (user == "nadeem" && password == "apple")
    {
        cout << "login";
    }
    else
    {
        cout << "invalid";
    }
}