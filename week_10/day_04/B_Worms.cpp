#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    map<long, long> lookup;

    int cum_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        for (int j = 0; j < temp; j++)
        {
            lookup.insert(pair<long, long>(++cum_sum, i + 1));
        }
    }

    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int inq;
        cin >> inq;
        cout << lookup[inq] << endl;
    }
    return 0;
}