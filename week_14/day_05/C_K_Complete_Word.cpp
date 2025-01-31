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
        string s;
        cin >> s;
        vector<bool> done(n, false);
        long chg = 0;

        for (long i = 0; i < s.size(); i++)
        {
            if (done[i])
            {
                continue;
            }
            vector<long> process;
            set<long> group;
            map<char, long> tally;
            process.push_back(i);
            while (process.size())
            {
                long pos = process.back();
                process.pop_back();
                if (done[pos])
                {
                    continue;
                }
                group.insert(pos);
                ++tally[s[pos]];
                done[pos] = true;
                for (long u = pos % k; u < n; u += k)
                {
                    if (!done[u])
                    {
                        process.push_back(u);
                    }
                    if (!done[n - 1 - u])
                    {
                        process.push_back(n - 1 - u);
                    }
                }
            }

            long mx = 0;
            for (set<long>::iterator it = group.begin(); it != group.end(); it++)
            {
                done[*it] = true;
            }
            for (map<char, long>::iterator it = tally.begin(); it != tally.end(); it++)
            {
                mx = (mx > (it->second)) ? mx : (it->second);
            }
            chg += (group.size() - mx);
        }
        cout << chg << endl;
    }
    return 0;
}