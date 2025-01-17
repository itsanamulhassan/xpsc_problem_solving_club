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
        map<long, long> m;
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            ++m[x];
        }

        vector<long> v(n + 1, 0);
        long mx = 0;
        for (map<long, long>::iterator it = m.begin(); it != m.end(); it++)
        {
            long key = it->first;
            long val = it->second;
            for (long p = 1; p * key <= n; p++)
            {
                v[p * key] += val;
                mx = (mx > v[p * key] ? mx : v[p * key]);
            }
        }
        cout << mx << endl;
    }

    return 0;
}