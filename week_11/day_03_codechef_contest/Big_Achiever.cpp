#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mx)
            {
                mx = a[i];
                cout << "1" << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}