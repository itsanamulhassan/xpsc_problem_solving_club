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
        int n, k;
        cin >> n >> k;
        vector<int> s(k + 1), a(k + 1);

        for (int i = 1; i <= k; i++)
        {
            cin >> s[i];
        }

        if (k == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        for (int i = k; i >= 2; i--)
        {
            a[i] = s[i] - s[i - 1];
        }

        bool flag = true;
        for (int i = 3; i <= k; i++)
        {
            if (a[i - 1] > a[i])
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "No" << endl;
            continue;
        }

        if ((long long)(a[2] - a[1]) * (n - k + 1) >= s[1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
