#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> v;

        long mx_odd = 0;
        for (long p = 0; p < n; p++)
        {
            long x;
            cin >> x;
            if (x % 2 != 0)
            {
                mx_odd = std::max(mx_odd, x);
            }
            else
            {
                v.push_back(x);
            }
        }

        if (v.size() == n)
        {
            cout << "0" << endl;
            continue;
        }

        sort(v.begin(), v.end());
        long count = v.size();

        for (long p = 0; p < v.size(); p++)
        {
            if (mx_odd > v.back())
            {
                break;
            }
            else if (mx_odd < v[p])
            {
                ++count;
                break;
            }
            else
            {
                mx_odd += v[p];
            }
        }

        cout << count << endl;
    }

    return 0;
}
