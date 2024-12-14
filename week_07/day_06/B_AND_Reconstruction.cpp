#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long> a(n), b(n + 1, 0);
        for (int i = 1; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i] | b[i + 1];
        }
        bool possible = true;
        for (int i = 1; possible && i < n; i++)
        {
            if ((a[i - 1] & a[i]) != b[i])
            {
                possible = false;
            }
        }

        if (!possible)
        {
            cout << "-1" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}