#include <iostream>

using namespace std;

int main()
{
    const float DISCOUNT = 0.1;
    float item_price;
    cout << "Price: ";
    cin >> item_price;
    float new_price = item_price - (item_price * DISCOUNT);

    cout << "Price with discount = " << new_price << endl;
    return 0;
}