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

        string a, b;
        cin >> a >> b;

        int total = 0, single = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' || b[i] == '1')
                total++;

            if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
                single++;
        }

        if (total % 2 == 1 || single > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
