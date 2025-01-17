#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long n;
    cin >> n;
    vector<bool> a(n + 2, 1);
    a[0] = a[1] = 0;
    for (int i = 2; i * i <= n + 1; i++)
    {
        if (!a[i])
        {
            continue;
        }
        for (long j = 2 * i; j < a.size(); j += i)
        {
            a[j] = 0;
        }
    }

    cout << (n <= 2 ? "1" : "2") << endl;

    for (long i = 2; i <= n + 1; i++)
    {
        cout << (a[i] ? 1 : 2) << " ";
    }
    cout << endl;
    return 0;
}