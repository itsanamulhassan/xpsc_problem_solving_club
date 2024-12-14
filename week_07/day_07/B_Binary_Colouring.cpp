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
        int x;
        cin >> x;

        vector<int> v;
        while (x)
        {
            v.push_back(x % 2);
            x /= 2;
        }
        bool flag = false;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i - 1] && v[i])
            {
                v[i - 1] = -1;
                v[i] = 0;
                flag = true;
            }
            else if (v[i] && flag)
            {
                v[i] = 0;
            }
            else if (v[i])
            {
                continue;
            }
            else if (flag)
            {
                v[i] = 1;
                flag = false;
            }
        }

        if (flag)
        {
            v.push_back(1);
        }

        cout << v.size() << endl;

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}