#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        vector<string> v(n);
        for (long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<string> w(n / k, string(n / k, '0'));
        for (long row = 0; row < n; row += k)
        {
            for (long col = 0; col < n; col += k)
            {
                w[row / k][col / k] = v[row][col];
            }
        }

        for (long i = 0; i < w.size(); i++)
        {
            cout << w[i] << endl;
        }
    }
    return 0;
}