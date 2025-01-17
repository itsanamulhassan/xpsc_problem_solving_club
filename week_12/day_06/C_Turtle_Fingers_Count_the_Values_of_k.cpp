#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long a, b, g;
        cin >> a >> b >> g;
        long div(1);
        set<long> s;
        while (g % div == 0)
        {
            long cur = g / div;
            s.insert(cur);
            while (cur % a == 0)
            {
                s.insert(cur / a);
                cur /= a;
            }
            div *= b;
        }
        cout << s.size() << endl;
    }

    return 0;
}