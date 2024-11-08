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
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> positions;

        for (int i = 1; i <= n; i++)
        {
            int u;
            cin >> u;
            positions[u].push_back(i);
        }

        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            if (!positions.count(a) || !positions.count(b))
            {
                cout << "NO" << endl;
                continue;
            }
            int x = positions[a][0];
            if (upper_bound(positions[b].begin(), positions[b].end(), x) == positions[b].end())
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}