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
        set<string> row[3];
        string str;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> str;
                row[j].insert(str);
            }
        }

        for (int j = 0; j < 3; j++)
        {
            int score = 0;
            for (set<string>::iterator it = row[j].begin(); it != row[j].end(); it++)
            {
                if (row[(j + 1) % 3].count(*it) && row[(j + 2) % 3].count(*it))
                {
                    continue;
                }
                if (row[(j + 1) % 3].count(*it) || row[(j + 2) % 3].count(*it))
                {
                    score++;
                }
                else
                {
                    score += 3;
                }
            }
            cout << score << " ";
        }
        cout << endl;
    }

    return 0;
}