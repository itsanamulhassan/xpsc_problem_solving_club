#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    for (int mask = 0; mask < (1 << n); mask++)
    {

        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if (1 & (mask >> k))
            {
                sum += a[k];
            }
            else
            {
                sum -= a[k];
            }
        }
        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}