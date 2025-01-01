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
        long cnt = 1, last = 1;
        while (last < n)
        {
            ++cnt;
            last = 2 * last + 2;
        }
        cout << cnt << endl;
    }

    return 0;
}