#include <bits/stdc++.h>
using namespace std;

bool compare_bottles(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

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

        vector<pair<int, int>> bottles;

        for (int i = 0; i < k; i++)
        {
            int brand, cost;
            cin >> brand >> cost;
            bottles.push_back({brand, cost});
        }

        sort(bottles.begin(), bottles.end(), compare_bottles);

        vector<long long> brand_earnings;

        for (int i = 0; i < k;)
        {
            int brand = bottles[i].first;
            long long brand_total = 0;
            int count = 0;

            while (i < k && bottles[i].first == brand && count < n)
            {
                brand_total += bottles[i].second;
                i++;
                count++;
            }

            brand_earnings.push_back(brand_total);
        }

        sort(brand_earnings.rbegin(), brand_earnings.rend());

        long long max_earnings = 0;
        for (int i = 0; i < min(n, (int)brand_earnings.size()); i++)
        {
            max_earnings += brand_earnings[i];
        }

        cout << max_earnings << endl;
    }

    return 0;
}
