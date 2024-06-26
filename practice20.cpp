// largest row sum problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = 0;
    while (i < n)
    {
        while (j < m)
        {
            sum = sum + array[i][j];
            ans = max(ans, sum);
            j++;
        }
        j = 0;
        sum = 0;
        i++;
    }
    cout << ans;
    return 0;
}