#include <bits/stdc++.h>
using namespace std;
const long CIRCLE = 360;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long n;
    cin >> n;
    vector<long> a(n);

    for (long p = 0; p < n; p++)
    {
        std::cin >> a[p];
    }

    long long N = (1LL << n);
    bool res = false;

    for (long long i = 0; i < N; i++)
    {
        long long s = 0, x = i;
        for (long j = 0; j < n; j++)
        {
            int g = (x % 2);
            x /= 2;
            if (g)
            {
                s += a[j];
            }
            else
            {
                s -= a[j];
            }
        }
        s = ((s % CIRCLE) + CIRCLE) % CIRCLE;
        if (s == 0)
        {
            res = true;
            break;
        }
    }
    if (res)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

        return 0;
}
