#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age of the person" << endl;
    cin >> age;

    if(age>=18){
        cout<<"you are eligible for voting"<<endl;
    }
    else{
        cout<<"Not eligible fo voting"<<endl;
    }

}