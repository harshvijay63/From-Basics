#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the rows : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // numbers
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + col + 1;
        }
        int start = row * 2;
        // reverse

        for (int col = 0; col < row; col++)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
    }
}
