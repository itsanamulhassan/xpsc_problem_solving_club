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
        string str;
        cin >> str;

        for (char c : str)
        {
            cout << c << " ";
        }

        cout << endl;
    }

    return 0;
}