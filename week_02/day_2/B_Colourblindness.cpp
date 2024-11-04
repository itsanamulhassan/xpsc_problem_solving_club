#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string one, two;
        cin >> n >> one >> two;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (one[i] == two[i])
            {
                continue;
            }
            if (two[i] == 'R' || one[i] == 'R')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}