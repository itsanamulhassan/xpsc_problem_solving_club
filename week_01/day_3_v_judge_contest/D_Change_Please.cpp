#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;

        if (x % 10 == 0)
        {
            cout << 100 - x << endl;
        }
        else
        {
            cout << (100 - x) / 10 * 10 << endl;
        }
    }
    return 0;
}