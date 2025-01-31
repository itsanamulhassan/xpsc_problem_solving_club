#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long n;
    cin >> n;
    vector<long> v;
    unordered_map<long, long> m;

    long cmx = 0;
    for (long i = 0; i < n; i++)
    {
        long x;
        cin >> x;

        for (long j = 0; j < v.size(); j++)
        {
            ++m[x + v[j]];
            cmx = (cmx > m[x + v[j]] ? cmx : m[x + v[j]]);
        }
        v.push_back(x);
    }
    cout << cmx << endl;

    return 0;
}