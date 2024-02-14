#include <iostream>

using namespace std;
int main()
{
    const float a = 32.0; //feet/s
    float distance, time;
    cout << "Distance: ";
    cin >> distance;
    cout << "Time: ";
    cin >> time;
    float trajectory = 0.5 * a * time * time; // Will be in terms of feer and seconds
    cout << "Trajectory is: " << trajectory << " f/s" << endl;
    return 0;
}
