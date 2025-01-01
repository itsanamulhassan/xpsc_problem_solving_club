#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;

    while (t--)
    {
        long n, q;
        cin >> n >> q;

        vector<long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        for (int i = 1; i < n; i++)
        {
            v[i] += v[i - 1];
        }

        while (q--)
        {
            int x;
            cin >> x;

            int left = 0, right = n - 1;
            if (x > v.back())
            {
                cout << "-1" << endl;
                continue;
            }

            int res = n - 1;

            while (left <= right)
            {
                long mid = (left + right) / 2;
                if (x <= v[mid])
                {
                    res = mid + 1;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }

            std::cout << res << endl;
        }
    }

    return 0;
}