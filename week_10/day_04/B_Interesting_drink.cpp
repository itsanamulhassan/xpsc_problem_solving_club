#include <bits/stdc++.h>
using namespace std;

int N = 100100;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<long> cum_prices(N + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ++cum_prices[x];
    }

    for (int i = 1; i <= N; i++)
    {
        cum_prices[i] += cum_prices[i - 1];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a;
        cin >> a;

        cout << cum_prices[(a <= N) ? a : N] << endl;
    }

    return 0;
}