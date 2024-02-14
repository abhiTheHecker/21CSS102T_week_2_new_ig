#include <iostream>

using namespace std;

int main()
{
    float weight, height;
    cout << "Weight: ";
    cin >> weight;
    cout << "Height: ";
    cin >> height;

    cout << "BMI: " << weight/(height*height);
    return 0;
}