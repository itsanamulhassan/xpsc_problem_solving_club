#include <bits/stdc++.h>
using namespace std;

int count_ones(string &s)
{
    return count(s.begin(), s.end(), '1');
}

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

        vector<int> count(3);
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            count[i] = count_ones(s);
        }

        int total = accumulate(count.begin(), count.end(), 0);

        if (total == 0 || total == 3 * n)
        {
            cout << "0" << endl;
        }
        else if (total == n)
        {
            cout << (n - *max_element(count.begin(), count.end())) << "\n";
        }
        else if (total == 2 * n)
        {
            cout << *min_element(count.begin(), count.end()) << "\n";
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
