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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n - 1 - i; i++)
        {
            cnt += (s[i] != s[n - 1 - i]);
        }
        string res(n + 1, '0');
        for (int i = cnt; i + cnt <= n; i++)
        {
            if ((n % 2) || ((i - cnt) % 2 == 0))
            {
                res[i] = '1';
            }
        }

        cout << res << endl;
    }
}