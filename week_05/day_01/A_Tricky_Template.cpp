
#include <bits/stdc++.h>
using namespace std;

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
        string a, b, c;
        cin >> a >> b >> c;
        bool res(false);
        for (int p = 0; !res && p < n; p++)
        {
            if (c[p] != a[p] && c[p] != b[p])
            {
                res = true;
            }
        }

        cout << (res ? "YES" : "NO") << endl;
    }
}