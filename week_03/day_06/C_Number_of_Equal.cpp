#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    map<long long, long long> mp1, mp2;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        mp1[x]++;
    }
    for (long long i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        mp2[x]++;
    }
    long long ans = 0;
    for (auto [key, value] : mp2)
    {
        ans += mp1[key] * value;
    }
    cout << ans << endl;
    return 0;
}