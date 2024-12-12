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
        int n, res;
        cin >> n;
        cin >> res;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;

            res &= x;
        }

        cout << res << endl;
    }
    return 0;
}