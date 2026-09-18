#include <iostream>
using namespace std;
int main()
{
    // 1D array

    cout << "left to right" << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    cout << "right to left" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    cout << "direct" << endl;
    cout << arr[3] << "  ";

    return 0;
}