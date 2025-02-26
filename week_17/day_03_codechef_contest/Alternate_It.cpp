#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool flag = true;

        for (int i = 0; i < s.length() - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "0" << endl;
            continue;
        }

        int count_zero = 0, count_one = 0;

        for (char c : s)
        {
            if (c == '0')
            {
                count_zero++;
            }
            else
            {
                count_one++;
            }
        }

        int d = abs(count_zero - count_one);

        if (s.length() % 2 == 0)
        {
            cout << ((d == 0) ? 1 : (d == 2 ? 2 : 3)) << endl;
        }
        else
        {
            cout << ((d == 1) ? 1 : (d == 3 ? 2 : 3)) << endl;
        }
    }

    return 0;
}
