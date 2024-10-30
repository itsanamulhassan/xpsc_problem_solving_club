#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    set<string> leaves;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        leaves.insert(s);
    }

    cout << leaves.size() << endl;

    return 0;
}
