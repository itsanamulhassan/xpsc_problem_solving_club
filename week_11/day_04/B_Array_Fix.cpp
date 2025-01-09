#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;
        long prev = -1;
        bool res = true;
        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            int d(x / 10), m(x % 10);
            if (prev <= d && d <= m)
            {
                prev = m;
            }
            else if (prev <= x)
            {
                prev = x;
            }
            else
            {
                res = false;
            }
        }
        if (res)
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
