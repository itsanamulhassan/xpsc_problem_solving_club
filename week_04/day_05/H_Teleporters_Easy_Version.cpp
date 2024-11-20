#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    vector<pair<int, int>> test_cases;
    vector<vector<int>> costs;

    for (int i = 0; i < t; ++i)
    {
        int n, c;
        cin >> n >> c;
        test_cases.push_back({n, c});

        vector<int> a(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> a[j];
        }
        costs.push_back(a);
    }

    vector<int> results;

    for (int k = 0; k < t; ++k)
    {
        int n = test_cases[k].first;
        int c = test_cases[k].second;
        vector<int> a = costs[k];
        vector<pair<int, int>> teleporters;
        for (int i = 0; i < n; ++i)
        {
            teleporters.push_back({i + 1 + a[i], i + 1});
        }

        sort(teleporters.begin(), teleporters.end());

        int count = 0;
        for (const auto &teleporter : teleporters)
        {
            int total_cost = teleporter.first;
            if (c >= total_cost)
            {
                c -= total_cost;
                count++;
            }
            else
            {
                break;
            }
        }

        results.push_back(count);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
