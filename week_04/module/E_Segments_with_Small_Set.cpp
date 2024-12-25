#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = 0, sum = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        sum += a[r];
        if (sum <= k)
        {
            ans = max(ans, 1LL * r - l + 1);
        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}