#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, ans = 0;
    cin >> x;

    if (x >= 4)
    {
        ans += x / 4;
        x %= 4;
    }

    if (x >= 2)
    {
        ans += x / 2;
        x %= 2;
    }

    if (x >= 1)
    {
        ans += x;
    }

    cout << ans << endl;

    return 0;
}
