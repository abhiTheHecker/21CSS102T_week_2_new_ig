#include <iostream>

using namespace std;

int main()
{
    const float INCREMENT = 11.5/100;
    float prev_sal; // Old annual Salary
    cout << "Current Salary: ";
    cin >> prev_sal;
    float comp_amt = INCREMENT * prev_sal;
    float new_sal = prev_sal + comp_amt; // New annual salary
    float new_monthly = new_sal / 12;

    cout << "Old salary: " << prev_sal << endl;
    cout << "New Salary: " << new_sal << endl;
    cout << " Annual compensation amount: " << comp_amt << endl;
    cout << "New Monthly Salary: " << new_monthly << endl;

    return 0;
}