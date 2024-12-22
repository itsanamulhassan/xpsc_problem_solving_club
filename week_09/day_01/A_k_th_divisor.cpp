#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> divisors;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i * i != n)
            {
                divisors.push_back(n / i);
            }
        }
    }

    if (k > divisors.size())
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(divisors.begin(), divisors.end());
        cout << divisors[k - 1] << endl;
    }

    return 0;
}
