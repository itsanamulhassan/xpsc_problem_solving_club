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
        int n, k, cn;
        cin >> n >> k;
        string str;
        cin >> str;
        int odd = 0, even = 0;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        for (auto [key, value] : mp)
        {
            if (value % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if (odd - k <= 1)
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