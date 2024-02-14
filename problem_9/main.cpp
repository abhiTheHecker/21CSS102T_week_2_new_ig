#include <iostream>

using namespace std;

int main()
{
    float raise = 0;
    int rating;
    cout << "Rating: ";
    cin >> rating;

    switch (rating)
    {
    case 1:
        raise = 6.0/100.0;
        break;

    case 2:
        raise = 4.0/100.0;
        break;

    case 3:
        raise = 1.5/100.0;
        break;

    default:
        break;
    }

    float salary;
    cout << "Salary: ";
    cin >> salary;

    float new_sal = salary + (raise * salary);

    cout << "New salary: " << new_sal;
    

    return 0;
}