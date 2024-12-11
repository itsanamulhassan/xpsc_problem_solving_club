#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if (m >= (n / 2.0))
    {
        cout << "NEWBIE" << endl;
    }
    else
    {
        cout << "PRO" << endl;
    }

    return 0;
}