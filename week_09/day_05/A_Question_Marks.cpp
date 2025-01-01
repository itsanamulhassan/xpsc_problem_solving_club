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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a += (s[i] == 'A');
            b += (s[i] == 'B');
            c += (s[i] == 'C');
            d += (s[i] == 'D');
        }

        long count = (a < n ? a : n) + (b < n ? b : n) + (c < n ? c : n) + (d < n ? d : n);
        cout << count << endl;
    }

    return 0;
}