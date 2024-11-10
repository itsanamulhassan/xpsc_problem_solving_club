#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }
    s.pop_back();

    // cout << s.empty() << endl;
    // s.clear();
    // cout << s.empty() << endl;

    // cout << s << endl;

    string sub_str = s.substr(0, 2);
    cout << sub_str << endl;

    return 0;
}