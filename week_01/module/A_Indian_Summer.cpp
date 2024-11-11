#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<pair<string, string>, bool> mp;

    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }

    for (auto [key, value] : mp)
    {
        cout << key.first << " " << key.second << value << endl;
    }
    return 0;
}