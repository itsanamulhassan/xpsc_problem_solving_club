#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        vector<int> curr;

        for (auto &[val, count] : freq)
        {
            if (count >= k)
            {
                curr.push_back(val);
            }
        }

        if (!curr.empty())
        {
            int l = 0, r = 0, longest = 0, start = curr[0];
            int length = 1;

            for (size_t i = 1; i < curr.size(); i++)
            {
                if (curr[i] == curr[i - 1] + 1)
                {
                    length++;
                }
                else
                {
                    if (length > longest)
                    {
                        longest = length;
                        l = start;
                        r = curr[i - 1];
                    }
                    start = curr[i];
                    length = 1;
                }
            }

            if (length > longest)
            {
                l = start;
                r = curr.back();
            }

            cout << l << " " << r << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
