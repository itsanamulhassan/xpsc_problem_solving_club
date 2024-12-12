#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        vector<long long> v(67, 0);
        long long n, res = 0;
        cin >> n;

        for (long long i = 0; i < n; i++)
        {
            long long x, count = 0;
            cin >> x;

            while (x > 1)
            {
                x /= 2;
                count++;
            }
            res += v[count]++;
        }
        cout << res << endl;
    }
    return 0;
}