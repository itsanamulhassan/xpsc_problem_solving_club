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
        long long n, ans = 0;
        cin >> n;
        multiset<int, greater<int>> mt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (mt.size() > 0)
                {
                    ans += *mt.begin();
                    mt.erase(mt.begin());
                }
            }
            else
            {
                mt.insert(x);
            }
        }
        cout << ans << endl;
    }
    return 0;
}