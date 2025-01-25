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
        long n, m, k;
        cin >> n >> m >> k;
        vector<long> b(n);
        for (long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<long> c(m);
        for (long i = 0; i < m; i++)
        {
            cin >> c[i];
        }

        long total = 0;
        for (int i = 0; i < n; i++)
        {
            for (int q = 0; q < m; q++)
            {
                if (b[i] + c[q] <= k)
                {
                    ++total;
                }
            }
        }

        cout << total << endl;
    }
    return 0;
}