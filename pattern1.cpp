#include <iostream>
using namespace std;
int main()
{
    int rowcount;
    int colcount;
    cout << "enter the rows and coloum";
    cin >> rowcount;
    cin >> colcount;

    for (int row = 0; row < rowcount; row++)
    {
        if (row == 0 || row == rowcount - 1)
        {
            for (int col = 0; col < colcount; col++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int i = 0; i < colcount - 2; i++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}