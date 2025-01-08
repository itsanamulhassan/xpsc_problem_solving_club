#include <bits/stdc++.h>
using namespace std;

long long calculate_inversions(string &s)
{
    long long inversion = 0, zero = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            zero++;
        }
        else
        {
            inversion += zero;
        }
    }
    return inversion;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        vector<long long> dp(n + 1, LLONG_MAX);
        dp[n] = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            string subsequence = "";
            int zeros = 0;

            for (int j = i; j < n; j++)
            {
                subsequence += s[j];
                long long inversions = calculate_inversions(subsequence);

                if (inversions <= x && inversions % k == 0)
                {
                    dp[i] = min(dp[i], 1 + dp[j + 1]);
                }
            }
        }

        if (dp[0] == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[0] << endl;
        }
    }

    return 0;
}
