#include <iostream>

using namespace std;

int main()
{
    int performance;
    cout << "Percentage: ";
    cin >> performance;

    if (performance < 33) {
        cout << "Redo";
    } else if (performance < 50){
        cout << "Resit";
    } else if (performance < 65) {
        cout << "S";
    } else if (performance < 75) {
        cout << "G";
    } else if (performance < 85) {
        cout << "O";
    } else {
        cout << "E";
    }
    return 0;
}