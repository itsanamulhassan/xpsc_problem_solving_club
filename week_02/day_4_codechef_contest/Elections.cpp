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
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), d;
        int winA = 0, winB = (n / 2) + 1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                winA++;
            }
            else
            {
                d.push_back(b[i] - a[i] + 1);
            }
        }

        sort(d.begin(), d.end());

        for (int i = 0; i < d.size(); i++)
        {
            if (x >= d[i])
            {
                x -= d[i];
                winA++;
                if (winA > winB)
                    break;
            }
            else
                break;
        }

        if (winA >= winB)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
