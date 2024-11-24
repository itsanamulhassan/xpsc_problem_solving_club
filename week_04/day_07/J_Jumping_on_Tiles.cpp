#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        vector<vector<int>> v(26);
        for (long p = 0; p < s.size(); p++)
        {
            v[s[p] - 'a'].push_back(p + 1);
        }
        int step = s[0] < s.back() ? 1 : -1;
        vector<int> seq;
        for (int p = (s[0] - 'a'); p != (s.back() - 'a') + step; p += step)
        {
            for (long q = 0; q < v[p].size(); q++)
            {
                seq.push_back(v[p][q]);
            }
        }

        cout << (step * (s.back() - s[0])) << " " << seq.size() << endl;
        for (long p = 0; p < seq.size(); p++)
        {
            cout << seq[p] << " ";
        }
        cout << endl;
    }
}