

#include <bits/stdc++.h>
using namespace std;

const int MAX_X = 1e6;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> divisors(MAX_X + 1, 0);

    for (int i = 1; i <= MAX_X; i++)
    {
        for (int j = i; j <= MAX_X; j += i)
        {
            divisors[j]++;
        }
    }

    int n;
    cin >> n;
    vector<int> results(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        results[i] = divisors[x];
    }

    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}