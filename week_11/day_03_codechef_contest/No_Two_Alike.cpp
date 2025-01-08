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
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, pair<int, int>> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(a[i]) == mp.end())
            {
                mp[a[i]] = {i, i};
            }
            else
            {
                mp[a[i]].second = i;
            }
        }

        vector<pair<int, int>> v;
        for (auto &i : mp)
        {
            int start = i.second.first, end = i.second.second;
            if (start != end)
            {
                v.push_back({start, end});
            }
        }

        if (v.empty())
        {
            cout << 0 << endl;
            continue;
        }

        sort(v.begin(), v.end());
        vector<pair<int, int>> array;
        int index_1 = v[0].first, index_2 = v[0].second;

        for (int i = 1; i < v.size(); i++)
        {
            int start = v[i].first;
            int end = v[i].second;

            if (start <= index_2)
            {
                index_2 = max(index_2, end);
            }
            else
            {
                array.push_back({index_1, index_2});
                index_1 = start;
                index_2 = end;
            }
        }
        array.push_back({index_1, index_2});

        int ans = 0;
        for (auto &val : array)
        {
            set<int> st;
            for (int i = val.first; i <= val.second; ++i)
            {
                st.insert(a[i]);
            }
            ans += st.size();
        }

        cout << ans << endl;
    }

    return 0;
}
