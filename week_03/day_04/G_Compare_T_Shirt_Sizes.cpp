#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        int a = 0, b = 0, i;

        int x = s.size();
        int y = t.size();

        if (s == t)
            cout << "=" << endl;
        else if (s[x - 1] == 'M')
        {
            if (t[y - 1] == 'S')
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
        else if (t[y - 1] == 'M')
        {
            if (s[x - 1] == 'L')
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
        else if (s[x - 1] == 'S' && t[y - 1] == 'L')
            cout << "<" << endl;
        else if (s[x - 1] == 'L' && t[y - 1] == 'S')
            cout << ">" << endl;
        else if (s[x - 1] == t[y - 1])
        {
            if (s[x - 1] == 'S')
            {
                if (x > y)
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
            else
            {
                if (x < y)
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
        }
    }
    return 0;
}