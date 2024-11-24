#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int m = n * (n - 1) / 2;
        vector<int> v(m);

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int idx = 0, step = n - 1;
        vector<int> g;

        while (idx < m)
        {
            g.push_back(v[idx]);
            idx += step;
            --step;
        }
        g.push_back(g.back());

        for (int i = 0; i < n; i++)
        {
            cout << g[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
