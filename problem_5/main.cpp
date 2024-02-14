#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Array Size: ";
    cin >> size;

    int *array = new int[size];

    for (int i = 0; i < size; i ++)
    {
        int num;
        cin >> num;
        array[i] = num;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    
    delete [] array;

    return 0;
}