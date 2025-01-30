#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2)
        {
            cout << "-1" << endl;
            continue;
        }
        long x = (a + b + c) / 2;
        long y = a + b;
        cout << (x < y ? x : y) << endl;
    }
    return 0;
}