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
        string str, check_str = "ADVITIYA";
        cin >> str;
        int ans = 0;

        for (int i = 0; i < 8; i++)
        {
            int count = (check_str[i] - str[i] + 26) % 26;
            ans += count;
        }
        cout << ans << endl;
    }
    return 0;
}