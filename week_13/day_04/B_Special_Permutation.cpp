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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> res(n, -1);
        res[0] = a;
        res[n - 1] = b;
        int cur = n;
        for (int i = 1; i < n - 1; i++)
        {
            while (cur == a || cur == b)
            {
                cur--;
            }
            res[i] = cur--;
        }

        long mn = n + 1, mx = -1;
        for (int i = 0; i < n / 2; i++)
        {
            mn = (mn < res[i] ? mn : res[i]);
        }
        for (int i = n / 2; i < n; i++)
        {
            mx = (mx > res[i] ? mx : res[i]);
        }

        if (mn != a || mx != b)
        {
            cout << "-1" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        };
        cout << endl;
    }

    return 0;
}