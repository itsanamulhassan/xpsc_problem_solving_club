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
        long seek = 1, count = 0;
        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            if (x == seek)
            {
                seek++;
            }
            else
            {
                count++;
            }
        }
        cout << (count + k - 1) / k << endl;
    }
    return 0;
}
