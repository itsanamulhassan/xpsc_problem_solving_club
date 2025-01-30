#include <bits/stdc++.h>
using namespace std;

bool vowel(char x) { return (x == 'a' || x == 'e'); }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;

        vector<long> v;
        for (long i = 0; i < s.size(); i++)
        {
            if (vowel(s[i]))
            {
                v.push_back(i);
            }
        }
        for (long i = 0; i < v.size(); i++)
        {
            long idx = v[i];
            cout << s[idx - 1] << s[idx];
            if (i + 1 < v.size() && v[i + 1] == idx + 3)
            {
                cout << s[idx + 1];
            }
            else if (idx + 2 == s.size())
            {
                cout << s[idx + 1];
            }
            if (i + 1 < v.size())
            {
                cout << '.';
            }
        }

        cout << endl;
    }

    return 0;
}