#include <iostream>
using namespace std;
int main()
{

    float weight, height, bmi;

    cout << "Enter your weight in kg here :";
    cin >> weight;

    cout << "Enter your height in cm here :";
    cin >> height;

    bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        cout << "Under weight";
    }
    else if (bmi < 25)
    {
        cout << "Normal";
    }
    else if (bmi < 30)
    {
        cout << "Overweight";
    }
    else
    {
        cout << "need to consult with doctor";
    }
}