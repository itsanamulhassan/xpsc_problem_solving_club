#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char str[n];
        for (int j = 0; j < n; j++)
        {
            cin >> str[j];
        }
        int first_index, last_index;

        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'B')
            {
                first_index = j;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (str[j] == 'B')
            {
                last_index = j;
                break;
            }
        }

        cout << last_index - first_index + 1 << endl;
    }

    return 0;
}