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
        map<long long, char> ma;
        long long n, index;
        string s;
        cin >> s;
        n = (long long)s.size();
        stack<long long> uppercase, lowercase;

        for (long i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (!uppercase.empty())
                {
                    index = uppercase.top();
                    ma[index] = '$';
                    uppercase.pop();
                }
                continue;
            }
            if (s[i] == 'b')
            {
                if (!lowercase.empty())
                {
                    index = lowercase.top();
                    ma[index] = '$';
                    lowercase.pop();
                }
                continue;
            }

            ma[i] = s[i];
            if (isupper(s[i]))
            {
                uppercase.push(i);
            }
            else
            {
                lowercase.push(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (ma.count(i) && ma[i] != '$')
            {
                cout << ma[i];
            }
        }
        cout << endl;
    }

    return 0;
}