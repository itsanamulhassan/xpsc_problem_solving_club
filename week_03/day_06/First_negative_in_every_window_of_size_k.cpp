#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> ans;
    int i = 0;
    int j = 0;
    queue<int> q;
    while (j < n)
    {
        if (a[j] < 0)
        {
            q.push(a[j]);
        }
        if (j - i + 1 == k)
        {
            if (q.empty())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(q.front());

                if (a[i] == q.front())
                {
                    q.pop();
                }
            }

            i++;
        }
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}