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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int even = 0, odd = 0;
        for (int p : v)
        {
            if (p % 2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        int ans = max(even, odd);

        cout << ans << endl;
    }

    return 0;
}