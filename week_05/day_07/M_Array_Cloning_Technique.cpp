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
        int n, count = 0, ans = 0;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            count = max(count, mp[x]);
        }

        while (count < n)
        {
            int diff = min(count, n - count);
            ans += 1 + diff;
            count *= 2;
        }

        cout << ans << endl;
    }
    return 0;
}