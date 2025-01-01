#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (0 != i % 2)
            {
                for (int j = n; j >= 1; j--)
                {
                    cout << j << " ";
                }
            }
            else
            {

                for (int j = 0; j < n; j++)
                {
                    cout << j + 1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}