#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int sum=0;
    while(n!=0 && n%2==0){
        sum+=n;
        n--;
    }
    cout<<"Sum of all even numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}