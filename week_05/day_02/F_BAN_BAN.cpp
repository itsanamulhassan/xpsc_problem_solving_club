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

        int swaps = (n / 2) + (n % 2);

        cout << swaps << endl;

        for (int i = 0; i < 3 * n / 2; i += 3)
        {
            cout << i + 1 << " " << 3 * n - i;
        }
        cout << endl;
    }

    return 0;
}
