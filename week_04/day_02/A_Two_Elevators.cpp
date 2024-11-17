
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
        int a, b, c;
        cin >> a >> b >> c;

        if (a <= b and c > b)
        {
            cout << "1" << endl;
            continue;
        }

        int for_b = abs(c - b) + abs(c - 1), for_a = a - 1;

        if (for_a < for_b)
            cout << "1" << endl;
        else if (for_b < for_a)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}
