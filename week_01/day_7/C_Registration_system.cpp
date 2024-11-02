#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> user_list(n);
    for (int i = 0; i < n; i++)

    {
        cin >> user_list[i];
    }

    for (string s : user_list)
    {
        cout << s << endl;
    }
    return 0;
}