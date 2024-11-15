#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, k;
    cin >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int n = a.size();
    int i = 0;
    int j = 0;
    long long sum = 0;
    long long temp = 0;

    while (j < n)
    {
        temp += a[j];
        if (j - i + 1 == k)
        {
            sum = max(sum, temp);
            temp -= a[i];

            i++;
        }
        j++;
    }
    cout << sum << endl;
    return 0;
}