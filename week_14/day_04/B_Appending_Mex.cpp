#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long n;
    cin >> n;
    long m = -1;
    for (long p = 0; p < n; p++)
    {
        long a;
        cin >> a;
        if (a > m + 1)
        {
            cout << p + 1 << endl;
            return 0;
        }
        m = (m > a) ? m : a;
    }
    cout << "-1";

    return 0;
}