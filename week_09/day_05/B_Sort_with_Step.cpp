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
        int n, k;
        cin >> n >> k;

        int bad = 0;
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;

            --x;
            bad += (x % k != i % k);
        }

        if (bad == 0)
        {
            cout << "0" << endl;
        }
        else if (bad == 2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}