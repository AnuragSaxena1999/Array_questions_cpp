#include <iostream>
using namespace std;
int main()
{
    int height;
    cout << "Enter the height of the triangle : "; cin >> height;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= (height - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}