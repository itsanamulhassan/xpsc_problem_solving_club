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
        int n, p;
        cin >> n >> p;
        vector<int> a(n), ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                ans[i] = 0;
                dq.clear();
                continue;
            }

            while (!dq.empty() && i - p + 1 > dq.front())
            {
                dq.pop_front();
            }

            while (!dq.empty() && a[i] > a[dq.back()])
            {
                dq.pop_back();
            }

            dq.push_back(i);

            int max = a[dq.front()];
            ans[i] = (max + p - 1) / p;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
