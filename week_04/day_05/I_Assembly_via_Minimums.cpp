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

        int size = n * (n - 1) / 2;
        vector<int> b(size);

        for (int i = 0; i < size; ++i)
        {
            cin >> b[i];
        }

        sort(b.rbegin(), b.rend());

        vector<int> a;
        set<int> seen;

        for (int i = 0; i < size && a.size() < n; ++i)
        {
            if (seen.find(b[i]) == seen.end())
            {
                a.push_back(b[i]);
                seen.insert(b[i]);
            }
        }

        for (int x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
