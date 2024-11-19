
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    string s;
    cin >> s;
    vector<int> ps(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + v[i - 1];
    }
    int i = 0, j = n - 1, tot = 0;
    while (i <= j)
    {
        while (i < n)
        {
            if (s[i] == 'L')
                break;
            i++;
        }
        if (i == n)
            break;
        while (j >= 0)
        {
            if (s[j] == 'R')
                break;
            j--;
        }
        if (j == -1)
            break;
        if (j < i)
            break;
        tot += ps[j + 1] - ps[i];
        i++, j--;
    }
    cout << tot << "\n";
}