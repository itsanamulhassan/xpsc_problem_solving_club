#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s, odd_count = 0, even_count = 0;
        cin >> s;

        for (int j = 1; j <= s; j++)
        {

            if (s % j == 0)
            {
                if (j % 2 == 0)
                {
                    even_count++;
                }
                else
                {
                    odd_count++;
                }
            }
        }

        if (even_count > odd_count)
        {
            cout << 1 << endl;
        }
        else if (even_count < odd_count)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}