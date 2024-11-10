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
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int gcd = numbers[0];
        for (int i = 1; i < n; i++)
        {
            gcd = __gcd(gcd, numbers[i]);
        }

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] != 0 && numbers[i] != gcd)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
