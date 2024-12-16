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
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int optimal_score = INT_MAX;

        if (n >= 2)
        {
            optimal_score = min(optimal_score, abs(a[0] - a[1]));
            optimal_score = min(optimal_score, abs(a[n - 1] - a[n - 2]));
        }

        for (int i = 1; i < n - 1; i++)
        {

            int max_difference = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));

            optimal_score = min(optimal_score, max_difference);
        }

        cout << optimal_score << endl;
    }

    return 0;
}
