#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<long long> normal_price(n), promotional_price(n);
        long long int normal_price_sum = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> normal_price[j];
            normal_price_sum += normal_price[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> promotional_price[j];
        }

        long long total_cost = 0, min_normal_price = LLONG_MAX;

        for (int j = 0; j < n; j++)
        {

            min_normal_price = min(min_normal_price, normal_price[j]);
        }

        for (int j = 0; j < n; j++)
        {
            long long current_cost = promotional_price[j], other_items_cost = LLONG_MAX;

            for (int k = 0; k < n; k++)
            {
                if (k != j)
                {
                    other_items_cost = min(other_items_cost, normal_price[k]);
                }
            }

            total_cost += current_cost + other_items_cost;
        }

        cout << total_cost - normal_price_sum << endl;
    }

    return 0;
}