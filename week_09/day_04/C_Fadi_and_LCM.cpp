#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x;
    cin >> x;

    long long a = 0, b = 0;
    for (long long i = 1; i * i <= x; i++)
    {
        if (x % i)
        {
            continue;
        }
        if (gcd(i, x / i) > 1)
        {
            continue;
        }
        a = i;
        b = x / i;
    }
    cout << a << " " << b << endl;

    return 0;
}