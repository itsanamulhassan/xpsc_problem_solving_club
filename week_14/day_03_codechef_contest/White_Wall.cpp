#include <bits/stdc++.h>
using namespace std;

vector<string> patterns = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        string str;
        cin >> n >> str;
        ans = n;

        for (auto p : patterns)
        {
            int changes_count = 0;
            for (int i = 0; i < n; i++)
            {
                if (str[i] != p[i % 3])
                {
                    changes_count++;
                }
            }
            ans = min(ans, changes_count);
        }

        cout << ans << endl;
    }

    return 0;
}
