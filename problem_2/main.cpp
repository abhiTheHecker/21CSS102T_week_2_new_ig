#include <iostream>

using namespace std;

int main()
{
    const float PI = 3.14;
    float r;
    cout << "Radius: ";
    cin >> r;
    float vol = (4.0/3.0) * PI * r*r*r;
    cout << "Volume = " << vol;
    return 0;
}