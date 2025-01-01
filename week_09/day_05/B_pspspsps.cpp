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
        if (s[0] == 's')
        {
            s[0] = '.';
        }
        if (s.back() == 'p')
        {
            s.back() = '.';
        }
        bool fs = false, fp = false;
        for (int i = 0; i < s.size() && !(fs && fp); i++)
        {
            if (s[i] == 's')
            {
                fs = true;
            }
            else if (s[i] == 'p')
            {
                fp = true;
            }
        }

        if (fs && fp)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}