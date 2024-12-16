#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, d = -1, ans_d = -1;
        cin >> n;
        vector<long long> a(n), b(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool flag = false;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = true;
                break;
            }
            if (b[i] != 0)
            {
                if (d == -1)
                {
                    d = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != d)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                ans_d = max(ans_d, a[i] - b[i]);
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        if (d == -1 || ans_d <= d)
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