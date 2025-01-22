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
        unordered_set<int> e;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            e.insert(a[i]);
            sum += a[i];
        }

        int m = 0;
        while (e.find(m) != e.end())
        {
            m++;
        }

        cout << max(sum, 1LL * m * n) << endl;
    }
    return 0;
}