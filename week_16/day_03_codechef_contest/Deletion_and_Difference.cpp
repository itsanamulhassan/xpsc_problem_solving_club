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
        int n, odd_count = 0, pair_count = 0;
        cin >> n;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }
        for (int x = 1; x <= n; x++)
        {
            odd_count += (freq[x] % 2);
            pair_count += (freq[x] / 2);
        }

        int zero_freq = freq[0];
        int pairs = zero_freq + pair_count;
        int empty_flag = (pairs > 0 ? 1 : 0);
        int min_length = empty_flag + odd_count;

        cout << min_length << endl;
    }

    return 0;
}
