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

        vector<int> ratings(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ratings[i];
        }

        string str;
        cin >> str;

        map<int, int> liked;
        map<int, int> disliked;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                disliked[ratings[i]] = i;
            }
            else
            {
                liked[ratings[i]] = i;
            }
        }

        vector<int> ans(n);
        int ratings_count = 1;

        for (auto [val, idx] : disliked)
        {
            ans[idx] = ratings_count;
            ratings_count++;
        }

        for (auto [val, idx] : liked)
        {
            ans[idx] = ratings_count++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}