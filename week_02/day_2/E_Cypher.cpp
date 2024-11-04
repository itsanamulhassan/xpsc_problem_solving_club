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
        vector<int> wheels_number(n);
        for (int i = 0; i < n; i++)
        {
            cin >> wheels_number[i];
        }
        for (int i = 0; i < n; i++)
        {
            int digit;
            cin >> digit;
            for (int j = 0; j < digit; j++)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    if (wheels_number[i] == 9)
                    {
                        wheels_number[i] = 0;
                    }
                    else
                    {
                        wheels_number[i]++;
                    }
                }
                else if (c == 'U')
                {
                    if (wheels_number[i] == 0)
                    {
                        wheels_number[i] = 9;
                    }
                    else
                    {
                        wheels_number[i]--;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << wheels_number[i] << " ";
        }
        cout << endl;
    }
    return 0;
}