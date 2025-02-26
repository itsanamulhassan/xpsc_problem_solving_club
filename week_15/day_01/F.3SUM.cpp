#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int B = 10;
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long cnt[B] = {0};
        for (long p = 0; p < n; p++)
        {
            long x;
            cin >> x;
            ++cnt[x % B];
        }

        bool res = false;

        for (long p = 0; !res && p < B; p++)
        {
            for (long q = p; !res && q < B; q++)
            {
                for (long r = q; !res && r < B; r++)
                {
                    if ((p + q + r) % 10 != 3)
                    {
                        continue;
                    }
                    --cnt[p];
                    --cnt[q];
                    --cnt[r];
                    if (cnt[p] >= 0 && cnt[q] >= 0 && cnt[r] >= 0)
                    {
                        res = true;
                    }
                    ++cnt[p];
                    ++cnt[q];
                    ++cnt[r];
                }
            }
        }
        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}