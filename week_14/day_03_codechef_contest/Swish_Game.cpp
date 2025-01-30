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
        int k, m, count = 0;
        cin >> m >> k;
        string str;
        cin >> str;
        for (char c : str)
        {
            if (c == 'S')
            {
                count++;
            }
        }

        if (count >= k)
        {
            cout << m << endl;
        }
        else
        {
            cout << m + (k - count) - 1 << endl;
        }
    }
    return 0;
}