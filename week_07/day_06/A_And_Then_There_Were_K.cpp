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
        int n, x = 1;
        cin >> n;

        while (2 * x <= n)
        {
            x *= 2;
        }
        --x;
        cout << x << endl;
    }
    return 0;
}