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
        long long n;
        cin >> n;
        long long r = (1LL << 62);
        vector<long long> v;

        while (r > 0 && r != n)
        {
            if ((r | n) == n)
            {
                v.push_back(n ^ r);
            }
            r /= 2;
        }
        v.push_back(n);

        cout << v.size() << endl;
        for (const auto &value : v)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}
