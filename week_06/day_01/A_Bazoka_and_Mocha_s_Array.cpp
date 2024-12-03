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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int idx = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i])
            {
                idx = i;
            }
        }

        int prev = v[idx];
        bool ans = true;
        for (int i = 1; ans && i < n; i++)
        {
            long q = (i + idx) % n;
            if (prev > v[q])
            {
                ans = false;
            }
            prev = v[q];
        }

        cout << (ans ? "Yes" : "No") << endl;
    }

    return 0;
}
