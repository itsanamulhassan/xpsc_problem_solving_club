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
        int n, zero_count = 0, one_count = 0, i = 0;
        string str;
        cin >> n >> str;
        while (i < n)
        {
            if (str[i] == '0')
                zero_count++;
            else
                one_count++;
            i++;
        }
        if (zero_count && one_count)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << str.size() << endl;
        }
    }
    return 0;
}