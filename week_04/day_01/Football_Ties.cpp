#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        int ans = max(x % 3, y % 3);
        cout << ans << endl;
    }
}