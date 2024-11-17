#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[i + 1])
                cnt++;
        }

        cout << cnt / 2 << endl;
    }
}