#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long g = 0;
        for (int p = 1; p <= n; ++p)
        {
            int x;
            cin >> x;
            long difference = abs(p - x);
            g = gcd(g, difference);
        }
        cout << g << endl;
    }
    return 0;
}
