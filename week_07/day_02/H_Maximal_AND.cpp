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
        int n, k;
        cin >> n >> k;
        vector<int> v(31);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < 31; j++)
            {
                v[j] += (x % 2);
                x /= 2;
            }
        }

        int res = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (v[i] + k >= n)
            {
                res += (1 << i);
                k -= (n - v[i]);
            }
        }

        printf("%ld\n", res);
    }
}