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
        int a, b, g;
        cin >> a >> b >> g;

        int div = 1;
        set<int> s;
        while (g % div == 0)
        {
            int cur = g / div;
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