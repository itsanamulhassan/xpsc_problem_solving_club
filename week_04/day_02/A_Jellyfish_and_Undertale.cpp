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
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> v(n + 1);
        long long int answer = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i] >= a - 1)
            {
                answer += a - 1;
            }
            else
            {
                answer += v[i];
            }
        }
        answer += b;
        cout << answer << endl;
    }

    return 0;
}