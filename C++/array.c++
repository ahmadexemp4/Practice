#include <iostream>
using namespace std;
int main()
{
    cout << "start to End" << endl;
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2}};
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    cout << "End to Start" << endl;
    for (int r = 2; r >= 0; r--)
    {
        for (int c = 3; c >= 0; c--)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    {
        cout << "Direct" << endl;
        cout << arr[2][3] << endl;
    }
    return 0;
}