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
        int n, lower, upper;
        cin >> n >> lower >> upper;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long count = 0, left = 0, right = n - 1;
        while (left < right)
        {
            if (a[left] + a[right] > upper)
            {
                --right;
            }
            else
            {
                count += right - left;
                ++left;
            }
        }

        long long count_lower = 0;
        left = 0;
        right = n - 1;
        while (left < right)
        {
            if (a[left] + a[right] >= lower)
            {
                --right;
            }
            else
            {
                count_lower += right - left;
                ++left;
            }
        }

        count -= count_lower;

        cout << count << endl;
    }
    return 0;
}