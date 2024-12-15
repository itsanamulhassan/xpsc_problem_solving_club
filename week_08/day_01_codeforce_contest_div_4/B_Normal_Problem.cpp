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
        string str_1, str_2;
        cin >> str_1;
        reverse(str_1.begin(), str_1.end());

        for (char c : str_1)
        {
            if (c == 'p')
            {
                str_2 += 'q';
            }
            else if (c == 'q')
            {
                str_2 += 'p';
            }
            else
            {
                str_2 += c;
            }
        }
        cout << str_2 << endl;
    }
    return 0;
}