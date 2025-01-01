#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int N = 10;
    vector<pair<int, int>> pos(10);
    pos[0] = pair<int, int>(1, 3);
    pos[1] = pair<int, int>(0, 0);
    pos[2] = pair<int, int>(1, 0);
    pos[3] = pair<int, int>(2, 0);
    pos[4] = pair<int, int>(0, 1);
    pos[5] = pair<int, int>(1, 1);
    pos[6] = pair<int, int>(2, 1);
    pos[7] = pair<int, int>(0, 2);
    pos[8] = pair<int, int>(1, 2);
    pos[9] = pair<int, int>(2, 2);

    long x;
    cin >> x;
    string num;
    cin >> num;
    vector<int> seq(num.size());
    for (int i = 0; i < num.size(); i++)
    {
        seq[i] = num[i] - '0';
    }

    vector<pair<int, int>> diffs(seq.size() - 1);
    for (int i = 0; i < diffs.size(); i++)
    {
        int a = seq[i];
        int b = seq[i + 1];
        diffs[i] = pair<int, int>(pos[b].first - pos[a].first, pos[b].second - pos[a].second);
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        pair<int, int> current = pos[i];
        bool possible = 1;
        for (int j = 0; j < diffs.size(); j++)
        {
            current.first += diffs[j].first;
            current.second += diffs[j].second;

            bool some_digit = 0;
            for (int k = 0; k < N; k++)
            {
                if (pos[k] == current)
                {
                    some_digit = 1;
                    break;
                }
            }
            if (!some_digit)
            {
                possible = 0;
                break;
            }
        }

        if (possible)
        {
            ++count;
        }
    }
    if (count <= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
