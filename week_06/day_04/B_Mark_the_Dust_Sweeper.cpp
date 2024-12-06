#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x = 0, res = 0;
        cin >> n;
        for (long long i = 1; i < n; i++)
        {
            cin >> x;
            res += x ? x : (res > 0);
        }

        cin >> x;

        cout << res << endl;
    }
}