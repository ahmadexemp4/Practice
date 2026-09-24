#include <iostream>
using namespace std;
int main()
{
    // 1D array
    cout << "start to end" << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "end to start" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    cout << "Direct access" << endl;
    cout << arr[3] << endl;

    // 2D array

    cout << "start to End" << endl;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2}};
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }

    cout << "End to Start" << endl;
    for (int r = 2; r >= 0; r--)
    {
        for (int c = 3; c >= 0; c--)
        {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }

    // Direct access
    {
        cout << "Direct" << endl;
        cout << matrix[2][3] << endl;
    }
    return 0;
}