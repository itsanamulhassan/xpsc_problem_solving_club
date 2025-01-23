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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long ans = -2000;
        for (int i = 1; i < n; i++)
        {
            long tst = a[i] - a[0];
            ans = (ans > tst) ? ans : tst;
        }

        for (int i = 0; i < n - 1; i++)
        {
            long tst = a[n - 1] - a[i];
            ans = (ans > tst) ? ans : tst;
        }

        for (int i = 0; i < n; i++)
        {
            long tst = a[(i - 1 + n) % n] - a[i];
            ans = (ans > tst) ? ans : tst;
        }
        cout << ans << endl;
    }

    return 0;
}