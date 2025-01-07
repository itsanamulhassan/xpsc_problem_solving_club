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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            a[i] = {x, i};
        }

        sort(a.begin(), a.end());

        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            c[a[i].second] = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}