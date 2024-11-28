
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int last(-k - 7);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                last = i;
            }
            else if (i <= last + k)
            {
                s[i] = '2';
            }
        }

        int count = 0;
        last = s.size() + k + 7;
        for (int i = s.size(); i >= 0; i--)
        {
            if (s[i] == '1')
            {
                last = i;
            }
            else if (i + k < last && s[i] == '0')
            {
                ++count;
                last = i;
            }
        }

        cout << count << endl;
    }

    return 0;
}