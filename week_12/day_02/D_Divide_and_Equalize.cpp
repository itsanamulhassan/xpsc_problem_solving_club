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
        map<long, long> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int i = 2; i * i <= x; i++)
            {
                while (x % i == 0)
                {
                    ++m[i];
                    x /= i;
                }
            }
            if (x > 1)
            {
                ++m[x];
            }
        }

        bool res = true;
        for (map<long, long>::iterator it = m.begin(); res && it != m.end(); it++)
        {
            if (it->second % n)
            {
                res = false;
            }
        }
        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}