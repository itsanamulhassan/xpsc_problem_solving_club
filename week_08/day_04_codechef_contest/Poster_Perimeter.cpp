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
        int n, m, k, differences = INT_MAX;
        cin >> n >> m >> k;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int ans = 2 * (i + j), difference;
                difference = abs(ans - k);
                differences = min(differences, difference);
            }
        }

        cout << differences << endl;
    }

    return 0;
}
