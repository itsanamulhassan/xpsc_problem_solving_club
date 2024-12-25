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
        int days;
        cin >> days;

        unordered_map<int, int> mp;

        for (int i = 1; i <= days; i++)
        {
            int day;
            cin >> day;
            mp[day] = max(mp[day], i);
        }

        long long total_sum = 0;

        for (pair<int, int> entry : mp)
        {
            total_sum += entry.second;
        }

        cout << total_sum << endl;
    }

    return 0;
}