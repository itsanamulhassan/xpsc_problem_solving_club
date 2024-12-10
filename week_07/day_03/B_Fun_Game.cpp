#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool possible = true;
        for (int i = 0; possible && i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                break;
            }
            else if (t[i] == '1')
            {
                possible = false;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}