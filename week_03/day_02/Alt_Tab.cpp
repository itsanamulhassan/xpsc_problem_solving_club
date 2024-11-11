#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> a(n);
    map<string, bool> mp;

    for (int i = n - 1; i >= 0; i--)
    {
        cin >> a[i];
    }
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == false)
        {
            ans.push_back(a[i]);
            mp[a[i]] = true;
        }
    }
    string str;
    for (int i = 0; i < ans.size(); i++)
    {
        string temp = ans[i];
        str += temp.substr(temp.size() - 2, temp.size());
    }
    cout << str << endl;

    return 0;
}