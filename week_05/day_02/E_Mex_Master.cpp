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
        int z(0);
        bool one(false), large(false);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                z++;
            }
            else if (x == 1)
            {
                one = true;
            }
            else if (x > 1)
            {
                large = true;
            }
        }

        int res(0);
        if ((n + 1) / 2 < z)
        {
            if (!one || large)
            {
                res = 1;
            }
            else
            {
                res = 2;
            }
        }

        cout << res << endl;
    }

    return 0;
}
