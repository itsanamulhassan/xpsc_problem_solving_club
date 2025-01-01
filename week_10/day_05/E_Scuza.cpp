#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        vector<long long int> a(n + 1, 0), b(n + 1, 0), c(1, 0), d(1, 0);
        for (long long i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = b[i - 1] + a[i];
            if (a[i] > c.back())
            {
                c.push_back(a[i]);
                d.push_back(i);
            }
        }

        c.push_back(2e9);
        d.push_back(n + 1);

        while (q--)
        {
            long long k;
            cin >> k;
            long long left = 0, right = c.size() - 1, res = 0;
            while (left <= right)
            {
                long long int mid = (left + right) / 2;
                long long int chk = c[mid];
                if (k < chk)
                {
                    res = b[d[mid] - 1];
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }

            cout << res << " ";
        }
        cout << endl;
    }

    return 0;
}