#include <bits/stdc++.h>
using namespace std;

bool is_possible(int count_s1, int count_t1)
{
    return (count_s1 - count_t1 + 2) % 2 == 0;
}

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
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            cout << "YES" << endl;
            continue;
        }
        int count_s0 = 0;
        int count_t1 = 0;
        int count_s1 = 0;
        int count_t0 = 0;
        for (char c : s)
        {
            if (c == '0')
                count_s0++;
            else
                count_s1++;
        }
        for (char c : t)
        {
            if (c == '1')
                count_t1++;
            else
                count_t0++;
        }
        if (is_possible(count_s1, count_t1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}