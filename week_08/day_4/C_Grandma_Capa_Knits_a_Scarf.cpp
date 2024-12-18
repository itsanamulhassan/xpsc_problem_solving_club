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

        int res = -1;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int left = 0, right = n - 1, count = 0;
            while (count >= 0 && left < right)
            {
                if (s[left] == s[right])
                {
                    left++;
                    right--;
                }
                else if (s[left] == c)
                {
                    left++;
                    count++;
                }
                else if (s[right] == c)
                {
                    right--;
                    count++;
                }
                else
                {
                    count = -1;
                }
            }

            if (count >= 0)
            {
                if (res < 0 || count < res)
                {
                    res = count;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}