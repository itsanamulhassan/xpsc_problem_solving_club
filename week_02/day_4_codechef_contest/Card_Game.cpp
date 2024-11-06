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
        int n, x;
        cin >> n >> x;
        vector<int> even_numbers;
        vector<int> odd_numbers;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                even_numbers.push_back(i);
            }
            else
            {
                odd_numbers.push_back(i);
            }
        }
        if (x % 2 == 0)
        {
            if (even_numbers.size() < 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << even_numbers.size() - 1 << endl;
            }
        }
        else
        {
            if (odd_numbers.size() < 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << odd_numbers.size() - 1 << endl;
            }
        }
    }
    return 0;
}
