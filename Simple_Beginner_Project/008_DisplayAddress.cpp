// This program collects and displays user information including name, address, and pin code.
// It prompts the user for their details and then displays them in a formatted manner.

#include <iostream>
using namespace std;    
int main(){

    string name,address;
    int pincode;

    cout<<"Enter your name :";
    cin>>name;

    cout<<"Enter your address :";
    cin>>address;

    cout<<"Enter your pin code :";
    cin>>pincode;

    cout<<"\n----DISPLAYING YOUR INFORMATION----"<<endl;
    cout<<"Your name is :"<<name<<endl;
    cout<<"Your rester address is :"<<address<<endl;
    cout<<"Your register pincode is :"<<pincode;

    return 0;
}