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
        vector<vector<int>> a(n, vector<int>(n));
        int left(1), right(n * n);
        bool flag(0);
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                if (flag)
                {
                    a[row][col] = left++;
                }
                else
                {
                    a[row][col] = right--;
                }
                flag ^= 1;
            }
            if (row & 1)
                reverse(a[row].begin(), a[row].end());
        }

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout << a[row][col] << " ";
            };
            cout << endl;
        }
    }
}