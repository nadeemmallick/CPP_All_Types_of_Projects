// DISPLAYING THE INFORMATION OF STUDENT
// This program collects and displays the details of a student including name, roll number, marks,

#include <iostream>
using namespace std;    
int main(){

    string name;
    int roll;
    float marks;
    int phonenumber;

    cout<<"Enter the name of student :";
    cin>> name;

    cout<<"Enter the rollno of student :";
    cin >> roll;

    cout<<"Enter the marks of student :";
    cin >> marks;

    cout<<"Enter the phone number of student :";
    cin >> phonenumber;


    cout<<"\n---Student Details---"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Roll :"<<roll<<endl;
    cout<<"Marks :"<<marks<<endl;
    cout<<"Phonenumber :"<<phonenumber<<endl;

    
    return 0;
}
