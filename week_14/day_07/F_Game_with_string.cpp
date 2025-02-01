#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    long cnt = 0;
    stack<long> t;
    for (long i = 0; i < s.size(); i++)
    {
        if (t.size() > 0 && t.top() == s[i])
        {
            t.pop();
            ++cnt;
        }
        else
        {
            t.push(s[i]);
        }
    }

    cout << (cnt % 2 ? "Yes" : "No") << endl;
    return 0;
}