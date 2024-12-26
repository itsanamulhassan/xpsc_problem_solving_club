#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y)
{
    if (x == 0)
    {
        return y;
    }
    else
    {
        return gcd(y % x, x);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, mx = 0;
    cin >> n;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];

        mx = (mx > a[i]) ? mx : a[i];
    }
    long long z = 0;
    for (long long i = 0; i < n; i++)
    {
        z = gcd(z, mx - a[i]);
    }
    long long y = 0;
    for (long long i = 0; i < n; i++)
    {
        y += (mx - a[i]) / z;
    }

    cout << y << " " << z << endl;

    return 0;
}