// This program collects and displays a user's favorite things.
// It prompts the user to enter their favorite color, food, and hobby, and then displays

#include<iostream>
using namespace std;
int main(){
    string favoriteColor, favoriteFood, favoriteHobby;

    cout << "Enter your favorite color: ";
    cin >> favoriteColor;

    cout << "Enter your favorite food: ";
    cin >> favoriteFood;

    cout << "Enter your favorite hobby: ";
    cin >> favoriteHobby;

    cout << "\n--- Your Favorite Things ---" << endl;
    cout << "Favorite Color: " << favoriteColor << endl;
    cout << "Favorite Food: " << favoriteFood << endl;
    cout << "Favorite Hobby: " << favoriteHobby << endl;

    return 0;
}