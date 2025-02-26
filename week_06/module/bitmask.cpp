#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    cout << "    ";
    for (int pos = 1; pos <= n; pos++)
    {
        cout << pos;
        if (pos != n)
            cout << ",";
    }
    cout << " " << endl;

    for (int i = 0; i < (1 << n); i++)
    {
        cout << i << "-> ";
        for (int k = 0; k < n; k++)
        {
            if (1 & (i >> k))
            {
                cout << "1" << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}