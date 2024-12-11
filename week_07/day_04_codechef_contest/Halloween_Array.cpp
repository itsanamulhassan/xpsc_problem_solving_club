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
        int n, l, r;
        cin >> n >> l >> r;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            if (0 >= l && 0 <= r)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        if (n > 8)
        {
            cout << "NO" << endl;
            continue;
        }
        long long pro = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long k = v[i] ^ v[j];
                if (k == 0)
                    pro = 0;
                else if (pro > r / k)
                    pro = r + 1;
                else
                    pro = pro * k;
            }
        }
        if (pro >= l && pro <= r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}