#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 0;
        while (n--)
        {
            long x;
            cin >> x;
            res |= x;
        }
        cout << res << endl;
    }
    return 0;
}