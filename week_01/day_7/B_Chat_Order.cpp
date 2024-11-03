#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    map<string, bool> mp;
    string s[n + 1], s1;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] != 1)
        {
            cout << s[i] << endl;
            mp[s[i]] = 1;
        }
    }

    return 0;
}
