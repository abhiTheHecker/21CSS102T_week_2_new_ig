#include <iostream>

using namespace std;

int main()
{
    int temp;
    cout << "Temperature: ";
    cin >> temp;

    if (temp < 40) {
        cout << "Skiing";
    } else if (temp < 60) {
        cout << "golf";
    } else if (temp < 80) {
        cout << "tennis";
    } else {
        cout << "Swimming";
    }
    return 0;
}