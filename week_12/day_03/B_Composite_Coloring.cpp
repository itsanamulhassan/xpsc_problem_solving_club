#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const vector<long> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        map<int, int> m;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            for (int j = 0; j < v.size(); j++)
            {
                if (a % v[j])
                {
                    continue;
                }
                int col = 0;
                if (!m.count(v[j]))
                {
                    m[v[j]] = ++cnt;
                }
                res[i] = m[v[j]];
                break;
            }
        }
        cout << cnt << endl;

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}