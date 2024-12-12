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
        bool a[11] = {0}, z[11] = {0};

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            for (long j = 0; j < 11; j++)
            {
                if (x % 2)
                {
                    a[j] = 1;
                }
                else if (x % 2 == 0)
                {
                    z[j] = 1;
                }
                x /= 2;
            }
        }

        int ans = 0, multi = 1;
        for (int i = 0; i <= 10; multi *= 2, i++)
        {
            ans += multi * a[i] * z[i];
        }
        cout << ans << endl;
    }

    return 0;
}
