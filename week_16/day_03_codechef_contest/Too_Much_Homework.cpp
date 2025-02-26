#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int ans = x + (10 * y);

    cout << (ans >= 100 ? "Yes" : "No") << endl;

    return 0;
}
