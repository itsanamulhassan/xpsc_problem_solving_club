#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int s_score = 0, d_score = 0, who = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);

        if (who % 2 == 0)
        {
            d_score += mx;
        }
        else
        {
            s_score += mx;
        }

        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        who++;
    }

    cout << s_score << " " << d_score << endl;
    return 0;
}