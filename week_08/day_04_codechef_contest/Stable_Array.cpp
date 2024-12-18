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
        int n, ans = 0;
        cin >> n;
        vector<int> a(n), seconds(n), max_values(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        max_values[n - 1] = a[n - 1];
        seconds[n - 1] = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            max_values[i] = max(a[i], max_values[i + 1]);

            if (max_values[i] != a[i])
            {
                seconds[i] = seconds[i + 1] + 1;
            }
            else
            {
                seconds[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            ans = max(seconds[i], ans);
        }
        cout << ans << endl;
    }
    return 0;
}