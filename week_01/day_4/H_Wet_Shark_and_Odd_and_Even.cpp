#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long int a[n];
    long long sum = 0;
    long long min_odd = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 != 0)
        {
            min_odd = min(min_odd, a[i]);
        }
    }
    if (sum % 2 != 0)
    {
        sum -= min_odd;
    }

    cout << sum << endl;
    return 0;
}
