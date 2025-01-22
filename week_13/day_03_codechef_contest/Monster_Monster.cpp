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
        int n, x;
        cin >> n >> x;
        vector<long long> h(n);
        for (long i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        sort(h.begin(), h.end());

        long long ans = 0;
        for (long i = 0; i < n; i++)
        {
            ans = max(ans, h[i] + 1LL * (n - i - 1) * x);
        }

        cout << ans << endl;
    }
    return 0;
}