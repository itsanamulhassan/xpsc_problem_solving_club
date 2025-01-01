#include <bits/stdc++.h>
using namespace std;

int R = 1e6;

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int chef = v[0];

        int min_val = *min_element(v.begin(), v.end()), max_val = *max_element(v.begin(), v.end()), second_min = INT_MAX, second_max = INT_MIN;

        for (int x : v)
        {
            if (x > min_val && x < second_min)
                second_min = x;
            if (x < max_val && x > second_max)
                second_max = x;
        }

        if (chef == min_val)
        {
            cout << chef + (second_min - chef) / 2 << endl;
        }
        else if (chef == max_val)
        {
            cout << R - chef + 1 + (chef - second_max) / 2 << endl;
        }
        else
        {
            int prev = INT_MIN, next = INT_MAX;
            for (int x : v)
            {
                if (x < chef && x > prev)
                    prev = x;
                if (x > chef && x < next)
                    next = x;
            }
            int a = chef - (chef - prev) / 2, b = chef + (next - chef) / 2;
            cout << b - a + 1 << endl;
        }
    }
    return 0;
}