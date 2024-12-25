#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, paper_size = 1000;
    cin >> t;

    while (t--)
    {
        int h, l, w;
        cin >> h >> l >> w;

        long long rectangular_area = 2 * (h * l + l * w + w * h);

        cout << 1LL * paper_size / rectangular_area << endl;
    }

    return 0;
}