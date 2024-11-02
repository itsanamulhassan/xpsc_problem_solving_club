#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> database;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}