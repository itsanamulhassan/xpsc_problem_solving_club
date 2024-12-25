#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
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

    long long int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long int m = a * b / gcd(a, b);
    long long int total = p * (n / a) + q * (n / b) - ((p < q ? p : q) * (n / m));
    cout << total << endl;

    return 0;
}