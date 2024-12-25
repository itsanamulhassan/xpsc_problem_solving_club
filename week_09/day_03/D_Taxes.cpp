#include <bits/stdc++.h>
using namespace std;

long prime(long x)
{

    if (x <= 1)
    {
        return false;
    }
    for (int p = 2; p * p <= x; p++)
    {
        if (x % p == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long n;
    cin >> n;
    long ans = 0;
    if (prime(n))
    {
        ans = 1;
    }
    else if (n % 2 == 0)
    {
        ans = 2;
    }
    else if ((n % 2) && prime(n - 2))
    {
        ans = 2;
    }
    else if ((n % 2) && !prime(n - 2))
    {
        ans = 3;
    }

    cout << ans << endl;
    return 0;
}