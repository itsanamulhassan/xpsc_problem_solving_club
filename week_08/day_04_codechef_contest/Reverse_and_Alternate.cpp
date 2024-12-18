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

        string target0 = "", target1 = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                target0 += '0';
                target1 += '1';
            }
            else
            {
                target0 += '1';
                target1 += '0';
            }
        }

        auto transform = [&](const string &target) -> bool
        {
            int left = -1, right = -1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != target[i])
                {
                    if (left == -1)
                        left = i;
                    right = i;
                }
            }

            if (left == -1)
                return true;

            reverse(s.begin() + left, s.begin() + right + 1);

            return s == target;
        };

        if (transform(target0) || transform(target1))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
