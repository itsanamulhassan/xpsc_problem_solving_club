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
        cin >> n;
        map<int, int> m;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ++m[x];
            count = max(count, m[x]);
        }

        int res = 0;
        while (count < n)
        {
            int diff = min(count, n - count);
            res += 1 + diff;
            count *= 2;
        }

        cout << res << endl;
    }
    return 0;
}
