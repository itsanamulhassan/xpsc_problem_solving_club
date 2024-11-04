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
        int x;
        cin >> x;
        if (x == 2)
        {
            cout << 1 << endl;
        }
        else if (x < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 1;
            x -= 2;
            for (int i = x; i >= 7; i -= 7)
            {
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}