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
        long long ans = 0, sum = 0, prev = 0, mx = 0;
        cin >> n;
        vector<long long> v(n);
        for (int j = 0; j < n; j++)
            cin >> v[j];
        for (int j = 0; j < n; j++)
        {
            mx = max(mx, v[j]);
            sum += v[j];
            if (mx == sum - mx)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}