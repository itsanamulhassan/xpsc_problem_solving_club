#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<string, int> students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    for (auto [name, roll] : students)
    {
        cout << name << " " << roll << endl;
    }

    return 0;
}