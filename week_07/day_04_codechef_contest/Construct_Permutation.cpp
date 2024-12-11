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
        if (n % 2 == 0)
        {
            cout << "-1" << endl;
            continue;
        }

        vector<int> ans(n);
        int odd = 1, even = 2;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = odd;
                odd += 2;
            }
            else
            {
                ans[i] = even;
                even += 2;
            }
        }

        for (int v : ans)
            cout << v << " ";
        cout << endl;
    }

    return 0;
}