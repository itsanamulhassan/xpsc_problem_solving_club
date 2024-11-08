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
        int n, m = 0;
        cin >> n;
        vector<int> numbers(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            mp[numbers[i]]++;
            m = max(mp[numbers[i]], m);
        }

        if (n % 2 == 0)
        {
            if (m <= n / 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 2 * m - n << endl;
            }
        }
        else
        {
            if (m <= n / 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 * m - n << endl;
            }
        }
    }

    return 0;
}