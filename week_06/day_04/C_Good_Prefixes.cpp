#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long n, cs = 0, mx = -1, cnt = 0;
        cin >> n;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mx = (mx > x ? mx : x);
            cs += x;
            cnt += (cs == 2 * mx);
        }

        cout << cnt << endl;
    }
}