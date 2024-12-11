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
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        int ved_height = k + v[0];

        int varun_height = p;
        for (int i = 1; i < n; ++i)
        {
            varun_height += v[i];
        }
        if (ved_height > varun_height)
        {
            cout << "Ved" << endl;
        }
        else if (varun_height > ved_height)
        {
            cout << "Varun" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}